#include "Delete.h"

#include <iostream>
#include <new> // 包含 std::destroying_delete_t

namespace DeleteNameSpace
{

    struct A
    {
        void operator delete(void *ptr)
        {
            std::cout << "111" << std::endl;
        }
        void operator delete(A *ptr, std::destroying_delete_t)
        {
            std::cout << "222" << std::endl;
        }
    };
    struct B
    {
        int value = 10;
        void operator delete(B *ptr, std::destroying_delete_t)
        {
            std::cout << "333" << std::endl;
        }
    };

    struct C
    {
        virtual ~C() {}
    };
    struct D : C
    {
        void operator delete(D *ptr, std::destroying_delete_t)
        {
            std::cout << "333" << std::endl;
        }
    };
    void DeleteExample()
    {
        A *a = new A;
        delete a; // 调用自定义的 delete

        B *b = new B;
        delete b; // 调用自定义的 destroying_delete_t

        C *c = new D;
        delete c; // 调用 D 的 destroying_delete_t
    }
}