#include "Execution.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <random>
#include <chrono>

namespace ExecutionNameSpace
{
    void ExecutionExample()
    {
        // 生成包含 1,000,000 个随机整数的向量
        std::vector<int> data(1'000'000);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 1'000'000);
        std::generate(data.begin(), data.end(), [&]()
                      { return dis(gen); });

        // 顺序排序
        auto seq_data = data;
        auto start = std::chrono::high_resolution_clock::now();
#if _LIBCPP_STD_VER >= 17 && __cpp_lib_execution
        std::sort(std::execution::seq, seq_data.begin(), seq_data.end());
#endif
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed_seq = end - start;
        std::cout << "Sequential sort time: " << elapsed_seq.count() << " seconds" << std::endl;
        // 并行排序
        auto par_data = data;
        start = std::chrono::high_resolution_clock::now();
#if _LIBCPP_STD_VER >= 17 && __cpp_lib_execution
        std::sort(std::execution::par, par_data.begin(), par_data.end());
#endif
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed_par = end - start;
        std::cout << "Parallel sort time: " << elapsed_par.count() << " seconds" << std::endl;
    }
}