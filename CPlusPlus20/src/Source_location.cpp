#include "Source_location.h"

#include <source_location>
#include <iostream>
#include <string>

namespace Source_locationNameSpace
{
    void function(const std::string &message, const std::source_location &location = std::source_location::current())
    {
        std::cout << location.file_name() << ":" << location.line() << " - " << message << "\n";
    }
    // 提供源代码位置信息。
    // std::source_location 提供文件名、行号等信息。
    // 常用于调试和日志记录。
    void Source_locationExample()
    {
        function("This is a message");
    }
}
