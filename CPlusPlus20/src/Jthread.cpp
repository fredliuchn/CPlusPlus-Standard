#include "Jthread.h"

#include <thread>
#include <iostream>

namespace JthreadNameSpace
{
    /*
    std::jthread JthreadExample([](std::stop_token token)
                                {
        while (!token.stop_requested()) {
            std::cout << "Working...\n";
        });
        std::jthread t1(worker), t2(worker), t3(worker);
    // std::jthread 是 std::thread 的增强版本，支持自动加入和取消。
    // std::jthread 自动管理线程的生命周期。
    // stop_token 用于请求线程停止。
    */
    void JthreadExample()
    {
        std::cout << "JthreadExample" << std::endl;
    }
} // namespace JthreadNamespace
