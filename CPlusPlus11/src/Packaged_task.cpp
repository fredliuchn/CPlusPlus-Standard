#include "Packaged_task.h"

#include <iostream>
#include <future>
#include <thread>

namespace Packaged_taskNameSpace
{
    // 函数：将两个数相加
    int add(int a, int b)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1)); // 模拟耗时操作
        return a + b;
    }

    void Packaged_taskExample()
    {
        // 创建 packaged_task，包装 add 函数
        std::packaged_task<int(int, int)> task(add);

        // 获取与 packaged_task 关联的 future
        std::future<int> result = task.get_future();

        // 在新线程中执行 task
        std::thread t(std::move(task), 5, 7); // 传递参数 5 和 7 给 task

        // 等待计算结果
        std::cout << "Waiting for result..." << std::endl;
        int sum = result.get(); // 阻塞直到结果可用
        std::cout << "Result of add(5, 7): " << sum << std::endl;

        // 等待线程完成
        t.join();
    }
} // namespace Packaged_taskNameSpace
