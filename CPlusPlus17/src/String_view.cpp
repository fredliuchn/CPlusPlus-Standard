#include "String_view.h"

#include <iostream>

namespace String_viewNameSpace
{
    void func(std::string_view stv) { std::cout << stv << std::endl; }

    void String_viewExample()
    {
        std::string str = "Hello World";
        std::cout << str << std::endl;

        std::string_view stv(str.c_str(), str.size());
        std::cout << stv << std::endl;
        func(stv);
    }
}