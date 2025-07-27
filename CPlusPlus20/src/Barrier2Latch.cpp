#include "Barrier2Latch.h"

#include <barrier>
#include <latch>
#include <thread>
#include <iostream>

namespace Barrier2LatchNameSpace
{
    /*
#include <barrier>
#include <latch>
#include <thread>
#include <iostream>
void Barrier2LatchExample()
{
    std::latch latch(3);
    std::barrier barrier(3);
    auto worker = [&]()
    {
        latch.count_down();
        barrier.arrive_and_wait();
        std::cout << "Done\n";
    };
    std::jthread t1(worker), t2(worker), t3(worker);
}
*/
    // 提供了新的同步原语。
    // std::latch：一个计数器，用于等待多个线程完成某个任务。
    // std::barrier：一个同步点，多个线程可以等待，直到所有线程都到达该点。s
    void Barrier2LatchExample()
    {
        /*
        std::latch latch(3);
        std::barrier barrier(3);
        auto worker = [&]()
        {
            latch.count_down();
            barrier.arrive_and_wait();
            std::cout << "Done\n";
        };
        std::jthread t1(worker), t2(worker), t3(worker);
        */
    }
    // 提供了新的同步原语。
    // std::latch：一个计数器，用于等待多个线程完成某个任务。
    // std::barrier：一个同步点，多个线程可以等待，直到所有线程都到达该点。
} // namespace Barrier2LatchNameSpace