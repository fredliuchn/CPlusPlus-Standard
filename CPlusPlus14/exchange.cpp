#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    std::exchange(v, {1, 2, 3, 4});
    std::cout << v.size() << std::endl;
    for (int a : v)
    {
        std::cout << a << " ";
    }
}
