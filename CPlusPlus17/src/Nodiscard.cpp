#include "Nodiscard.h"

namespace NodiscardNameSpace
{
    [[nodiscard]] int function(int a, int b)
    {
        return a + b;
    }
    void NodiscardExample()
    {
        // 如果不使用 [[nodiscard]]，编译器不会发出警告
        // int result = function(1, 2); // 正常使用
        // 使用 [[nodiscard]]，如果不使用返回值，编译器会发出警告

        // 如果你确实需要忽略返回值，又不想看到编译器的警告
        [[maybe_unused]] int result = function(1, 2);

        int result1 = function(1, 2);
    }
} // namespace NodiscardNameSpace
