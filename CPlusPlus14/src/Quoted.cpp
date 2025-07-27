#include "Quoted.h"

#include <iostream>
#include <string>
#include <iomanip>

namespace QuotedNameSpace
{
    void QuotedExample()
    {
        std::string str = "hello world";
        std::cout << str << std::endl;              // hello world
        std::cout << std::quoted(str) << std::endl; // "hello world"
    }
}