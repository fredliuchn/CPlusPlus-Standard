#include "As_const.h"

#include <utility> // std::as_const
#include <string>
#include <iostream>

namespace As_constNameSpace
{
    void As_constExample()
    {
        std::string str = "str";
        // 将 str 转换为 const std::string& 类型
        const std::string &constStr = std::as_const(str);
        // 此时无法通过 constStr 修改 str 的内容
        // constStr.push_back('a');  // 编译错误！
        std::cout << constStr << std::endl; // 输出 "str"
    }
}