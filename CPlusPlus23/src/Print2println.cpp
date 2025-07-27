#include "Print2println.h"

#include <print>

namespace Print2printlnNameSpace
{
    void Print2printlnExample()
    {
        std::print("Hello, World!\n");
        std::println("Formatted number: {}", 42);
    }
}