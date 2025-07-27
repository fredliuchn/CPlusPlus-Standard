#include "Assume.h"

#include <utility>
#include <cassert>

namespace AssumeNameSpace
{
    int divide(int a, int b)
    {
        [[assume(b != 0)]];
        return a / b;
    }
    void AssumeExample()
    {
        int result = divide(10, 2); // Compiler assumes b is not 0
        assert(result == 5);
    }
}