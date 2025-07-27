#include "Literals.h"

#include <thread>
#include <chrono>
#include <iostream>

using namespace std::chrono_literals;

namespace LiteralsNameSpace
{
    void LiteralsExample()
    {
        // 使用 C++14 的数字分隔符
        long long large_number = 1'000'000'000LL; // 1 亿
        int a = 0b0001'0011'1010;
        double b = 3.14'1234'1234'1234;

        std::this_thread::sleep_for(100ms);
        std::this_thread::sleep_for(100s);
        // 使用 C++14 的字符串字面量
        const char *hello_world = u8"Hello, World!"; // UTF-8 字符串字面量

        std::cout << "Large number: " << large_number << std::endl;
        std::cout << "Binary number: " << a << std::endl;
        std::cout << "Decimal number: " << b << std::endl;
        std::cout << "String literal: " << hello_world << std::endl;
    }
}