#include "Tuple.h"
#include <tuple>
#include <iostream>

namespace TupleNameSpace
{
    void TupleExample()
    {
        std::tuple<int, float, std::string> myTuple(1, 3.14f, "Hello");
        std::cout << "First element: " << std::get<0>(myTuple) << "\n";
        std::cout << "Second element: " << std::get<1>(myTuple) << "\n";
        std::cout << "Third element: " << std::get<2>(myTuple) << "\n";

        std::tuple<int, double, std::string> t = {42, 3.14, "Hello"};
        auto [a, b, c] = t;
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
}
