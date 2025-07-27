#include "Literals.h"
#include <iostream>

// 自定义后缀示例（UDL）
constexpr float operator"" _f(long double x)
{
    return static_cast<float>(x);
}

// 对 true 和 false 字面量的支持
template <bool B>
struct Selector;
template <>
struct Selector<true>
{
    void run() { std::cout << "True branch" << std::endl; }
};
template <>
struct Selector<false>
{
    void run() { std::cout << "False branch" << std::endl; }
};

void LiteralsExample()
{
    /*
        // 数字分隔符
        auto population = 1_000_000;  // 更易读的一百万
        auto hex_value = 0x1234_5678; // 十六进制分组表示
        auto bin_mask = 0b1001_0110;  // 二进制掩码更清晰
        auto pi = 3.141_592_653_589;  // 高精度浮点常量
    */
    // 浮点文字后缀支持
    auto f = 1.23f;     // float 类型
    auto d = 1.23;      // double 类型（默认）
    auto ld = 1.23L;    // long double 类型
    auto sf = 1.2345_f; // 自定义后缀（需结合 UDL 实现），例如用于单精度 float

    // 自定义后缀示例（UDL）
    auto value = 3.141592_f;
    std::cout << "Value as float: " << value << std::endl;

    // 对 true 和 false 字面量的支持
    static_assert(true, "This should always pass.");
    if (false)
    {
        // 此代码块永远不会执行
    }
}