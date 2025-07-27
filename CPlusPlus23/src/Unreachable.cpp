#include "Unreachable.h"
#include <utility>

namespace UnreachableNameSpace
{
    [[noreturn]] void error()
    {
        throw "error";
    }
    void UnreachableExample()
    {
        int x = 0;
        if (x == 0)
        {
            error();
        }
        std::unreachable(); // 识程序中不会被执行到的代码部分
    }
}