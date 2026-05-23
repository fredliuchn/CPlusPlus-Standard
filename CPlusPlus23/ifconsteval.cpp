#include <iostream>

constexpr int compute(int x)
{
    if consteval
    {
        return x * 2;
    }
    else
    {
        return x * 3;
    }
}

int main()
{
    constexpr int result = compute(5); // Result is 10 at compile-time
    return 0;
}
