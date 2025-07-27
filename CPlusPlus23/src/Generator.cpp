#include "Generator.h"

#if __cplusplus >= 202302L && defined(__cpp_lib_generator)
#include <generator>
#endif
#include <iostream>
namespace GeneratorNameSpace
{
#if __cplusplus >= 202302L && defined(__cpp_lib_generator)
    std::generator<int> fibonacci(int max)
    {
        int a = 0, b = 1;
        while (a < max)
        {
            co_yield a; // 暂停并返回当前值
            auto next = a + b;
            a = b;
            b = next;
        }
    }
#endif
    // co_yield 暂停协程并返回值。
    // fibonacci 是一个生成器，生成斐波那契数列。
    void GeneratorExample()
    {
#if __cplusplus >= 202302L && defined(__cpp_lib_generator)
        for (int n : fibonacci(10))
        {
            std::cout << n << " ";
            // 输出：0 1 1 2 3 5 8
        }
#endif
        std::cout << "GeneratorExample" << std::endl;
    }
} // namespace GeneratorNameSpaceß