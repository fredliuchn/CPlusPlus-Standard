#include "Threewaycomparison.h"

#include <compare>
#include <iostream>

namespace ThreewaycomparisonNameSpace
{
    struct Point
    {
        int x, y;
        auto operator<=>(const Point &) const = default;
    };
    // 三路比较运算符自动生成 <, <=, >, >=, == 和 != 的实现。
    // operator<=>(const Point&) const = default; 自动生成所有比较运算符。
    // 编译器会根据成员变量的顺序生成比较逻辑。
    void ThreewaycomparisonExample()
    {
        Point p1{1, 2}, p2{3, 4};
        if (p1 < p2)
        {
            std::cout << "p1 < p2" << std::endl;
        }
        else if (p1 > p2)
        {
            std::cout << "p1 > p2" << std::endl;
        }
        else
        {
            std::cout << "p1 == p2" << std::endl;
        }
    }
}
