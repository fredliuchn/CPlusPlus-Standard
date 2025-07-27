#include "Consteval.h"

#include <iostream>

namespace ConstevalNameSpace
{
    constexpr int f(int a)
    {
        return a * a;
    }
    // 参数a必须是编译期常量
    consteval int func(int a)
    {
        return f(a); // 合法，因为f()可以在编译期计算
    }

    void ConstevalExample()
    {
        constexpr int a = f(5);
        constexpr int b = func(5);
    }
} // namespace ConstevalNameSpace