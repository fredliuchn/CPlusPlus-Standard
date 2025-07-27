#include "Random.h"

#include <time.h>
#include <iostream>
#include <random>

namespace RandomNameSpace
{
    void RandomExample()
    {
        std::default_random_engine random(time(nullptr));

        std::uniform_int_distribution<int> int_dis(0, 100);       // 整数均匀分布
        std::uniform_real_distribution<float> real_dis(0.0, 1.0); // 浮点数均匀分布

        for (int i = 0; i < 10; ++i)
        {
            std::cout << int_dis(random) << ' ';
        }
        std::cout << std::endl;

        for (int i = 0; i < 10; ++i)
        {
            std::cout << real_dis(random) << ' ';
        }
        std::cout << std::endl;
    }
} // namespace RandomNameSpace
