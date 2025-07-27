#include "Attribute.h"

#include <iostream>

namespace AttributeNameSpace
{
    [[noreturn]] void func()
    {
        throw "error";
    }
    // 带有此属性的函数必须通过抛出异常、调用std::exit()或其他方式终止程序执行

    std::atomic<int *> p;
    std::atomic<int *> q;

    void func1(int *val)
    {
        std::cout << *val << std::endl;
    }

    void func2(int *val [[carries_dependency]])
    {
        q.store(val, std::memory_order_release);
        std::cout << *q << std::endl;
    }

    void thread_job()
    {
        int *ptr1 = (int *)p.load(std::memory_order_consume);
        std::cout << *ptr1 << std::endl;

        func1(ptr1);
        func2(ptr1);
    }
    void AttributeExample()
    {
        try
        {
            func();
        }
        catch (char const *e)
        {
            std::cout << "Got something: " << e << "  \n";
        }
        thread_job();
    }
}