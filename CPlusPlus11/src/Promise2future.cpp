#include "Promise2future.h"

#include <iostream>
#include <future>
#include <thread>

namespace Promise2futureNameSpace
{
    // 示例函数，使用 promise 传递结果
    void computeValue(std::promise<int> p)
    {
        try
        {
            // 模拟一些计算
            std::this_thread::sleep_for(std::chrono::seconds(2));
            int result = 100;
            // 设置 promise 的值
            p.set_value(result);
        }
        catch (...)
        {
            // 如果发生异常，将其设置为 promise 的异常
            p.set_exception(std::current_exception());
        }
    }

    void Promise2futureExample()
    {
        // 创建一个 promise 对象
        std::promise<int> p;

        // 从 promise 获取 future
        std::future<int> f = p.get_future();

        // 在一个新线程中运行 computeValue
        std::thread t(computeValue, std::move(p));

        // 等待 future 的值
        try
        {
            std::cout << "Waiting for result..." << std::endl;
            int result = f.get(); // 获取线程返回的值
            std::cout << "Result: " << result << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // 等待线程完成
        t.join();
    }
} // namespace Promise2futureNameSpace
