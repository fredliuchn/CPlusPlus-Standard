#include "Variant.h"

#include <variant>
#include <iostream>

namespace VariantNameSpace
{
    void VariantExample()
    {
        // 定义一个包含 int 和 std::string 的 variant
        std::variant<int, std::string> v;

        // 将 int 值赋给 variant
        v = 42;
        if (std::holds_alternative<int>(v))
        {
            std::cout << "Variant holds an int: " << std::get<int>(v) << std::endl;
        }

        // 将 std::string 值赋给 variant
        v = "Hello, Variant!";
        if (std::holds_alternative<std::string>(v))
        {
            std::cout << "Variant holds a string: " << std::get<std::string>(v) << std::endl;
        }
    }
} // namespace VariantNameSpace
