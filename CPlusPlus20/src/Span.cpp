#include "Span.h"

#include <span>
#include <iostream>

namespace SpanNameSpace
{
    void function(std::span<int> span)
    {
        for (int n : span)
        {
            std::cout << n << " ";
        }
    }
    // 一个轻量级的非拥有视图，用于表示连续的对象序列。
    // std::span 可以表示数组、容器或部分序列。
    // 它不拥有数据，只是一个视图
    void SpanExample()
    {
        std::array<int, 5> arr = {1, 2, 3, 4, 5};
        function(arr);
    }
}