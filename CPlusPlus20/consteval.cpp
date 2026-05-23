#include <iostream>
constexpr int f(int a)
{
    return a * a;
}
// 参数a必须是编译期常量
consteval int func(int a)
{
    return f(a); // 合法，因为f()可以在编译期计算
}
int main()
{
    constexpr int a = f(5);
    constexpr int b = func(5);
    return 0;
}
