cmake_minimum_required(VERSION 3.10)
project(CPlusPlus11 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 自动查找所有cpp文件
file(GLOB CPP_FILES "*.cpp")

# 为每个cpp文件创建可执行文件
foreach(CPP_FILE ${CPP_FILES})
    # 获取文件名(不含扩展名)
    get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
    
    # 创建可执行文件,添加版本前缀避免命名冲突
    add_executable(cpp11_${FILE_NAME} ${FILE_NAME}.cpp)
endforeach()
