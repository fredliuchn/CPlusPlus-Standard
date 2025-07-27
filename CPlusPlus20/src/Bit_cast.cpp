#include "Bit_cast.h"

#include <bit>

namespace Bit_castNameSpace
{
    void Bit_castExample()
    {
        float f = 3.14f;
        // 使用 std::bit_cast 将 float 转换为 uint32_t
        uint32_t b = std::bit_cast<uint32_t>(f);
    }
    // 一种安全的位级转换方式
    // std::bit_cast 将 float 的位模式转换为 uint32_t。
    // 比 memcpy 更安全。
} // namespace Bit_castNameSpace