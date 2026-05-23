#include <expected>
#include <iostream>
#include <string>

std::expected<int, std::string> safe_divide(int a, int b)
{
    if (b == 0)
    {
        return std::unexpected("Division by zero!");
    }
    return a / b;
}

int main()
{
    auto result = safe_divide(10, 2);
    if (result)
    {
        std::cout << "Result: " << result.value() << std::endl;
    }
    else
    {
        std::cout << "Error: " << result.error() << std::endl;
    }
    result = safe_divide(10, 0);
    if (result)
    {
        std::cout << "Result: " << result.value() << std::endl;
    }
    else
    {
        std::cout << "Error: " << result.error() << std::endl;
    }
    return 0;
}
