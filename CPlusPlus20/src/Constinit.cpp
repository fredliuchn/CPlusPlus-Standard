#include "Constinit.h"

namespace ConstinitNameSpace
{
    const char *get_str1()
    {
        return "111111";
    }
    constexpr const char *get_str2()
    {
        return "222222";
    }
    const char *hahah = " hhahahaa ";
    constinit const char *str1 = get_str2(); // 合法，使用 constexpr 函数初始化
    // constinit const char *str2 = get_str1(); // 非法，使用非 constexpr 函数初始化
    // constinit const char *str3 = hahah; // 非法，使用非常量表达式初始化
    void ConstinitExample()
    {
        static constinit const char *str4 = get_str2(); // 合法，静态变量
        // constinit const char *str5 = get_str2();        // 非法，非静态/非 thread_local
        constinit thread_local const char *str6; // 合法，thread_local 可不初始化
    }
}