#include "Coroutine_handle.h"

#include <coroutine>
#include <iostream>
#include <exception>

namespace Coroutine_handleNameSpace
{
    template <typename T>
    struct Generator
    {
        struct promise_type
        {
            T value;
            std::suspend_always yield_value(T v)
            {
                value = v;
                return {};
            }
            std::suspend_always initial_suspend() { return {}; }
            std::suspend_always final_suspend() noexcept { return {}; }
            Generator get_return_object()
            {
                return Generator{std::coroutine_handle<promise_type>::from_promise(*this)};
            }
            void return_void() {}
            void unhandled_exception() { std::terminate(); }
        };
        std::coroutine_handle<promise_type> handle;
        Generator(std::coroutine_handle<promise_type> h) : handle(h) {}
        ~Generator()
        {
            if (handle)
                handle.destroy();
        }
        bool next()
        {
            handle.resume();
            return !handle.done();
        }
        T getValue() { return handle.promise().value; }
    };
    Generator<int> sequence(int start, int step)
    {
        for (int i = start;; i += step)
        {
            co_yield i;
        }
    }
    void Coroutine_handleExample()
    {
        auto gen = sequence(0, 5);
        for (int i = 0; i < 10; ++i)
        {
            gen.next();
            std::cout << gen.getValue() << ' ';
        }
    }
}