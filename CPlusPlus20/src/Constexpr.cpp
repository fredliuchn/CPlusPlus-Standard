#include "Constexpr.h"

namespace ConstexprNameSpace
{
    constexpr int function(int n)
    {
        return n <= 1 ? 1 : n * function(n - 1);
    }
    // constexper 允许更多的标准库函数和操作在编译时执行。
    // constexpr 函数在编译时求值.
    // 提高了性能和安全性

    void ConstexprExample()
    {
        constexpr int result = function(5); // 在编译时计算
        // 使用 result 进行其他操作
    }
}
