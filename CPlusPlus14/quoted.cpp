#include <iostream>
#include <string>
#include <iomanip>
int main()
{
    std::string str = "hello world";
    std::cout << str << std::endl;              // hello world
    std::cout << std::quoted(str) << std::endl; // "hello world"
    return 0;
}
