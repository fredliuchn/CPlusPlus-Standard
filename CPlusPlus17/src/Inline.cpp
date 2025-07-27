#include "Inline.h"

#include <iostream>

namespace InlineNameSpace
{
    // constexpr变量
    constexpr int MaxSize = 100; // 必须是常量表达式
    // inline变量
    inline int global_counter = 0; //
    // 内联变量允许开发者在头文件中直接定义具有唯一地址的全局变量或静态成员变量。
    // 通过使用 inline 关键字修饰变量，可以避免传统方式下因多个源文件包含相同定义而引发的链接错误。

    void InlineExample()
    {
        // 使用constexpr变量
        for (int i = 0; i < MaxSize; ++i)
        {
            global_counter++;
        }
        std::cout << "Global counter: " << global_counter << std::endl;
    }
}