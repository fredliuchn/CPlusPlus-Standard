#include "Stacktrace.h"

#include <iostream>
#if __cplusplus >= 202302L && defined(__cpp_lib_stacktrace)
#include <stacktrace>
#define HAS_STACKTRACE 1
#else
// 如果不支持，可以使用其他方式或禁用功能
#define HAS_STACKTRACE 0
#endif

namespace StacktraceNameSpace
{
    void StacktraceExample()
    {
#if HAS_STACKTRACE
        std::cout << std::stacktrace::current() << std::endl;
#else
        std::cout << "Stacktrace not available" << std::endl;
#endif
    }
}