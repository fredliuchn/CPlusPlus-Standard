#include "Likely.h"

namespace LikelyNameSpace
{
    int function(int i)
    {
        switch (i)
        {
        case 1:
            [[fallthrough]]; // 显式说明允许 fall-through
        [[likely]] case 2:
            return 1; // 高概率进入该分支
        [[unlikely]] case 3:
            return 2; // 极低概率进入该分支
        }
        return 4;
    }
    void LikelyExample()
    {
        int a = function(1);
        int b = function(2);
        int c = function(3);
        int d = function(4);
        int e = function(5);
    }
}