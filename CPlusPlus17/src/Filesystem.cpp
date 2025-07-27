#include "Filesystem.h"

#include <filesystem>
#include <fstream>
#include <iostream>

namespace FilesystemNameSpace
{
    void FilesystemExample()
    {
        namespace fs = std::filesystem;
        // 创建一个新目录
        fs::create_directory("test_directory");
        // 构建文件路径
        fs::path file_path = "test_directory/test_file.txt";
        // 创建并写入文件
        std::ofstream file(file_path);
        file << "Hello, Filesystem!";
        file.close();
        // 查询文件大小
        std::uintmax_t file_size = fs::file_size(file_path);
        std::cout << "File size: " << file_size << " bytes" << std::endl;
        // 重命名文件
        fs::path new_file_path = "test_directory/renamed_file.txt";
        fs::rename(file_path, new_file_path);
        // 删除文件
        fs::remove(new_file_path);
        // 删除目录
        fs::remove("test_directory");

        // 遍历目录内容
        for (const auto &entry : fs::directory_iterator("."))
        {
            std::cout << entry.path() << std::endl;
        }
        // 递归遍历子目录
        for (const auto &entry : fs::recursive_directory_iterator("."))
        {
            if (fs::is_regular_file(entry))
            {
                std::cout << "File: " << entry.path() << std::endl;
            }
        }

        // 检查文件是否存在及是否是目录
        if (fs::exists("data.txt") && !fs::is_directory("data.txt"))
        {
            std::cout << "data.txt 是一个普通文件。" << std::endl;
        }
    }
}