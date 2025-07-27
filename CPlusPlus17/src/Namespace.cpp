#include "Namespace.h"

// C++17 之前
// 外部命名空间
namespace outer
{
    // 内部命名空间
    namespace inner
    {
        int foo1()
        {
            return 42;
        }
    }
}
// C++17
namespace outer::inner
{
    int foo2()
    {
        return 42;
    }
}

namespace NamespaceNameSpace
{
    void NamespaceExample()
    {
        outer::inner::foo1();
        outer::inner::foo2();
    }
}
