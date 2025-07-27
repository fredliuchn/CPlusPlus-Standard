#include "Forward_list.h"

#include <forward_list>
#include <iostream>
namespace Forward_listNameSpace
{
    void Forward_listExample()
    {
        std::forward_list<int> fl = {1, 2, 3, 4, 5};
        for (const auto &elem : fl)
        {
            std::cout << elem;
        }
    }
}
