#include <thread>
#include <chrono>
#include <iostream>

struct mytype
{
    unsigned long long value;
};
constexpr mytype operator"" _mytype(unsigned long long n)
{
    return mytype{n};
}

int main()
{
    mytype mm = 123_mytype;
    std::cout << mm.value << std::endl;
    return 0;
}
