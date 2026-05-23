#include <tuple>
#include <utility>
#include <iostream>

// 示例结构体，用于展示 std::make_from_tuple 的用法
struct Foo
{
    Foo(int first, float second, int third)
    {
        std::cout << first << ", " << second << ", " << third << "\n";
    }
};

int main()
{
    auto tuple = std::make_tuple(42, 3.14f, 0);
    auto foo = std::make_from_tuple<Foo>(std::move(tuple));
    return 0;
}