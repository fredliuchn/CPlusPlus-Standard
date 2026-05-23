#include <utility>
#include <cassert>

int divide(int a, int b)
{
    [[assume(b != 0)]];
    return a / b;
}

int main()
{
    int result = divide(10, 2); // Compiler assumes b is not 0
    assert(result == 5);
    return 0;
}
