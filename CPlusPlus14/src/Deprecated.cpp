#include "Deprecated.h"

namespace DeprecatedNameSpace
{
    struct [[deprecated]] A
    {
    };

    [[deprecated("Use new_greeting() instead. ")]]
    void old_greeting()
    {
    }

    void DeprecatedExample()
    {
        A a;
        old_greeting();
    }
}