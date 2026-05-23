#if __cplusplus >= 202302L && defined(__cpp_lib_flat_map)
#include <flat_map>
#elseif defined(__cpp_lib_flat_set)
#include <flat_set>
#endif
#include <iostream>

int main()
{
#if __cplusplus >= 202302L && defined(__cpp_lib_flat_map)
        std::flat_map<int, std::string> map = {{1, "one"}, {2, "two"}};
        map[3] = "three";
        for (const auto &[key, value] : map)
        {
            std::cout << key << ": " << value << '\n';
        }
#elseif __cplusplus >= 202302L && defined(__cpp_lib_flat_set)
        std::flat_set<int> set = {1, 2, 3};
        for (const auto &value : set)
        {
            std::cout << value << '\n';
        }
#endif
        std::cout << "Flat_map2flat_setExample" << std::endl;
    return 0;
}
