#include <iostream>
int main()
{
    auto a = 10; // 10是int型，可以自动推导出a是int

    const int &i = 1;
    decltype(i) b = 2; // b是const int&
    int c = 0;
    return 0;
}
