#include "Concepts.h"

#include <concepts>
#include <iostream>

namespace ConceptsNameSpace
{
    // 定义一个概念，要求类型是整数
    template <typename T>
    concept Integral = std::is_integral_v<T>;
    // 使用概念约束模板参数
    template <Integral T>
    void function(T value)
    {
        std::cout << "Integral value: " << value << std::endl;
    }
    // 概念用于约束模板参数，确保模板参数满足特定条件。这使得模板代码更清晰，编译器可以更早地捕获错误。
    // Integral 是一个概念，约束模板参数必须是整数类型。
    // 如果传递非整数类型（如 double），编译器会报错。
    void ConceptsExample()
    {
        // 使用概念约束模板参数
        function(42); // 正确，42 是整数
        // function(3.14); // 错误，3.14 不是整数
    }
}