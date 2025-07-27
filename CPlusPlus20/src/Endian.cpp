#include "Endian.h"
#include <bit>
#include <iostream>

namespace EndianNameSpace
{
    void EndianExample()
    {
        if constexpr (std::endian::native == std::endian::big)
        {
            std::cout << "big-endian" << '\n';
        }
        else if constexpr (std::endian::native == std::endian::little)
        {
            std::cout << "little-endian" << '\n';
        }
        else
        {
            std::cout << "mixed-endian" << '\n';
        }
    }
}
