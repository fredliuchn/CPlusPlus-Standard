#include "Mdspan.h"

#include <iostream>
#if __cplusplus >= 202302L && defined(__cpp_lib_experimental_mdspan)
#include <experimental/mdspan>
#endif

namespace MdspanNameSpace
{
    void MdspanExample()
    {
#if __cplusplus >= 202302L && defined(__cpp_lib_experimental_mdspan)
        int data[6] = {1, 2, 3, 4, 5, 6};
        mdspan<int, extents<3, 2>> matrix(data);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                std::cout << matrix(i, j) << ' ';
            }
            std::cout << '\n';
        }
#endif
        std::cout << "MdspanExample" << std::endl;
    }
}