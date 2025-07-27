#include "Optional.h"

#include <optional>
#include <iostream>

namespace OptionalNameSpace
{
    std::optional<double> sqrt_optional(double x)
    {
        if (x >= 0.0)
        {
            return std::sqrt(x);
        }
        else
        {
            return std::nullopt; // 明确表示无值
        }
    }
    void OptionalExample()
    {
        std::optional<double> result = sqrt_optional(4.0);
        if (result)
        {
            std::cout << "The square root of 4.0 is " << result.value() << std::endl;
        }
        else
        {
            // 处理无值情况
        }
    }
} // namespace OptionalNameSpace
