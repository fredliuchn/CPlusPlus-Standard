#include "Exchange.h"

#include <iostream>
#include <vector>

namespace ExchangeNameSpace
{
    void ExchangeExample()
    {
        std::vector<int> v;
        std::exchange(v, {1, 2, 3, 4});
        std::cout << v.size() << std::endl;
        for (int a : v)
        {
            std::cout << a << " ";
        }
    }
}