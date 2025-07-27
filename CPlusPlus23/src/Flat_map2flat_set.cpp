#include "Flat_map2flat_set.h"

#if __cplusplus >= 202302L && defined(__cpp_lib_flat_map)
#include <flat_map>
#endif
#include <iostream>

namespace Flat_map2flat_setNameSpace
{
    void Flat_map2flat_setExample()
    {
#if __cplusplus >= 202302L && defined(__cpp_lib_flat_map)
        std::flat_map<int, std::string> map = {{1, "one"}, {2, "two"}};
        map[3] = "three";
        for (const auto &[key, value] : map)
        {
            std::cout << key << ": " << value << '\n';
        }
#endif
        std::cout << "Flat_map2flat_setExample" << std::endl;
    }
}