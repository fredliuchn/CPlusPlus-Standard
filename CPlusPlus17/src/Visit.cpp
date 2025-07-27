#include "Visit.h"

#include <variant>
#include <string>
#include <iostream>

namespace VisitNameSpace
{
    // 定义一个变体类型，包含 int、double 和 std::string
    using var_t = std::variant<int, double, std::string>;
    struct visitor
    {
        void operator()(int i) const { std::cout << "Integer: " << i << std::endl; }
        void operator()(double d) const { std::cout << "Double: " << d << std::endl; }
        void operator()(const std::string &s) const { std::cout << "String: " << s << std::endl; }
    };
    void VisitExample()
    {
        var_t v1 = 42;
        var_t v2 = 3.14;
        var_t v3 = "Hello World";
        std::visit(visitor{}, v1);
        std::visit(visitor{}, v2);
        std::visit(visitor{}, v3);
    }
}