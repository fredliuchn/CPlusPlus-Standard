#include <iostream>

struct A
{
}; // 空类型
struct C
{
};
struct B
{
    long long v;
    [[no_unique_address]] C a, b;
};

int main()
{
    B b;
    std::cout << &b.v << std::endl;      // 输出 v 的地址
    std::cout << &b.a << std::endl;      // 地址为 &v + 1
    std::cout << &b.b << std::endl;      // 地址为 &v + 2
    std::cout << sizeof(B) << std::endl; // 输出 8
    return 0;
}
