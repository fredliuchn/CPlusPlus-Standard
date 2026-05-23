#include <iostream>
#include <tuple>
#include <utility>
int add(int first, int second) { return first + second; }

auto add_lambda = [](auto first, auto second)
{ return first + second; };

int main()
{
    std::cout << std::apply(add, std::pair(1, 2)) << '\n';
    // std::cout << add(std::pair(1, 2)) << "\n"; // error
    std::cout << std::apply(add_lambda, std::tuple(2.0f, 3.0f)) << '\n';
    return 0;
}
