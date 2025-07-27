#include "Literals.h"

#include <thread>
#include <chrono>
#include <iostream>

namespace LiteralsNameSpace
{

    struct mytype
    {
        unsigned long long value;
    };
    constexpr mytype operator"" _mytype(unsigned long long n)
    {
        return mytype{n};
    }

    void LiteralsExample()
    {
        mytype mm = 123_mytype;
        std::cout << mm.value << std::endl;
    }
}