#include "Ifconstexpr.h"

#include <iostream>
#include <type_traits>

namespace IfconstexprNameSpace
{
    template <typename T>
    void print_type_info(const T &t)
    {
        if constexpr (std::is_integral_v<T>)
        {
            std::cout << t << " is an integral number." << std::endl;
        }
        else if constexpr (std::is_floating_point_v<T>)
        {
            std::cout << t << " is a floating-point number." << std::endl;
        }
        else
        {
            std::cout << "Unknown type." << std::endl;
        }
    }
    void IfconstexprExample()
    {
        print_type_info(42);      // Integral
        print_type_info(3.14);    // Floating-point
        print_type_info("Hello"); // Unknown type
    }

} // namespace IfconstexprNameSpace
