#include "Ranges.h"

#include <vector>
#include <ranges>
#include <iostream>

namespace RangesNameSpace
{
    void RangesExample()
    {
        std::vector<int> numbers = {1, 2, 3, 4, 5};
        // 过滤偶数，然后映射为平方
        auto result = numbers | std::views::filter([](int n)
                                                   { return n % 2 == 0; }) |
                      std::views::transform([](int n)
                                            { return n * n; });
        for (int n : result)
        {
            std::cout << n << " ";
            // 输出：4 16
        }
    }
    // 范围库提供了一种高层次的方式来处理序列（如数组、容器等），支持组合操作（如过滤、映射等）。
    // std::views::filter 过滤偶数。
    // std::views::transform 将过滤后的结果映射为平方。范围库的组合操作使得代码更简洁。
}