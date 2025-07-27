#include "Any.h"

#include <iostream>
#include <any>
#include <string>
namespace AnyNameSpace
{
    int AnyExample()
    {
        std::any my_any;
        // 存储 int 值
        my_any = 42;
        std::cout << "my_any contains an int: "
                  << std::any_cast<int>(my_any) << std::endl;
        // 存储 double 值
        my_any = 3.14;
        std::cout << "my_any contains a double: "
                  << std::any_cast<double>(my_any) << std::endl;
        // 存储字符串
        my_any = std::string("hello");
        std::cout << "my_any contains a string: "
                  << std::any_cast<std::string>(my_any) << std::endl;
        return 0;
    }
}