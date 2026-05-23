#include <iostream>

struct [[deprecated]] A
{
};

[[deprecated("Use new_greeting() instead. ")]]
void old_greeting()
{
}

int main()
{
    A a;
    old_greeting();
    return 0;
}
