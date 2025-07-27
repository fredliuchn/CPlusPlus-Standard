#include "Align.h"

#include <type_traits>
#include <new>

namespace AlignNameSpace
{
    class A
    {
        int a;
        char d;
    };
    // 创建给定类型对象大小满足对齐要求的未初始化内存块，在一个内存对齐的缓冲区上创建对象
    // C++11后可以这样操作
    void align_cpp11_after()
    {
        static std::aligned_storage<sizeof(A),
                                    alignof(A)>::type data;
        A *attr = new (&data) A;
    }

    // C++11之前
    void align_cpp11_before()
    {
        static char data[sizeof(void *) + sizeof(A)];
        const uintptr_t kAlign = sizeof(void *) - 1;
        char *align_ptr =
            reinterpret_cast<char *>(reinterpret_cast<uintptr_t>(data + kAlign) & ~kAlign);
        A *attr = new (align_ptr) A;
    }

    void AlignExample()
    {
        align_cpp11_after();
        align_cpp11_before();
    }
} // namespace AlignNameSpace