#include "Unary.h"

namespace UnaryNameSpace
{ // 一元右折叠
    template <typename... Args>
    auto add_rval(Args &&...args)
    {
        return (args + ...);
    }
    // 一元左折叠
    template <typename... Args>
    auto add_lval(Args &&...args)
    {
        return (... + args);
    }
    // 二元右折叠
    template <typename... Args>
    auto sub_right(Args &&...args)
    {
        return (args - ... - 0);
    }
    // 二元左折叠
    template <typename... Args>
    auto sub_left(Args &&...args)
    {
        return (0 - ... - args);
    }
    void UnaryExample()
    {
        auto t1 = add_rval(1, 2, 3, 4); // return 1 + (2 + (3 + 4))
        auto t2 = add_lval(1, 2, 3, 4); // return ((1 + 2) + 3) + 4
        auto t3 = sub_right(1, 2, 3);   // 1 - (2 - (3 - 0)) = 2
        auto t4 = sub_left(1, 2, 3);    // ((0 - 1) - 2) - 3 = -6
    }
}