#include "Thread_local.h"

#include <iostream>
#include <thread>

namespace Thread_localNameSpace
{
    class A
    {
    public:
        A() {}
        ~A() {}

        void test(const std::string &name)
        {
            thread_local int count = 0;
            ++count;
            std::cout << name << ": " << count << std::endl;
        }
    };

    void func(const std::string &name)
    {
        A a1;
        a1.test(name);
        a1.test(name);
        A a2;
        a2.test(name);
        a2.test(name);
    }

    void Thread_localExample()
    {
        std::thread(func, "thread1").join();
        std::thread(func, "thread2").join();
    }
}