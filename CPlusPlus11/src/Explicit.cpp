#include "Explicit.h"

#include <iostream>

namespace ExplicitNameSpace
{
    struct A
    {
        A(int value)
        { // 没有explicit关键字
            std::cout << "value" << std::endl;
        }
    };

    struct B
    {
        explicit B(int value)
        {
            std::cout << "value" << std::endl;
        }
    };

    void ExplicitExample()
    {
        A a = 42;

        // B b = 1; // error，不可以隐式转换
        B bb(2); // ok
    }
}