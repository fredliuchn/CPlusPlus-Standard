#include "Format.h"

#include <string>
#include <format>
#include <iostream>

namespace FormatNameSpace
{
    std::string FormatExample(std::string a, int b)
    {
        return std::format("Hello {}, {}!", a, b);
    }
    // 类型安全且可扩展的字符串格式化方法
    // std::format 类似于 Python 的 str.format()。支持格式化字符串、数字、日期等。

    void FormatExample()
    {
        std::string a = "world";
        int b = 42;
        std::string result = FormatNameSpace::FormatExample(a, b);
        std::cout << result << std::endl;
    }
}
