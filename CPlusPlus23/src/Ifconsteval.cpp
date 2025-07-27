#include "Ifconsteval.h"

namespace IfconstevalNameSpace
{
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
    void IfconstevalExample()
    {
        constexpr int result = compute(5); // Result is 10 at compile-time
    }
}