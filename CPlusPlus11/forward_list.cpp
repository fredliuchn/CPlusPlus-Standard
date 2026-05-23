#include <forward_list>
#include <iostream>
int main()
{
    std::forward_list<int> fl = {1, 2, 3, 4, 5};
    for (const auto &elem : fl)
    {
        std::cout << elem;
    }
    return 0;
}
