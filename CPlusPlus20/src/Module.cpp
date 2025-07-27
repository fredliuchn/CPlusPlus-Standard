#include "Module.h"

#include <iostream>

namespace ModuleNameSpace
{
    // 模块示例函数
    void ModuleExample()
    {
        // 模块化代码示例
        // 这里可以放置模块相关的代码
        std::cout << "Module Example Function Called!" << std::endl;
    }
}
//  MyModule.cpp
/*
export module MyModule;
export int add(int a, int b) { return a + b; }
// main.cpp
import MyModule;
int main()
{
    std::cout << add(2, 3);  // 输出：5;
    return 0;
}
*/

// 模块是 C++20 引入的一种新的代码组织方式，替代传统的头文件和 #include，提高编译速度。
// export module MyModule 定义一个模块。
// import MyModule 导入模块。
// 模块避免了头文件的重复包含问题。