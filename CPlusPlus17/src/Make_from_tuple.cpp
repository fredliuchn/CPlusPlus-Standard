#include "Make_from_tuple.h"

#include <tuple>
#include <utility>
#include <iostream>

namespace Make_from_tupleNameSpace
{
    // 示例结构体，用于展示 std::make_from_tuple 的用法
    struct Foo
    {
        Foo(int first, float second, int third)
        {
            std::cout << first << ", " << second << ", " << third << "\n";
        }
    };
    void Make_from_tupleExample()
    {
        auto tuple = std::make_tuple(42, 3.14f, 0);
        std::make_from_tuple<Foo>(std::move(tuple));
    }
}