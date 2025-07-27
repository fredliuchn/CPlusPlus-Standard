project (CPlusPlus20Test)

# Add a library with the above sources
include_directories(./ ${SRC_DIR_ROOT})
FOREACH(SRC_DIR ${SRC_DIR_ROOT})
    file(GLOB_RECURSE USER_FILE_PATH ${USER_FILE_PATH} ${SRC_DIR}/*.cc ${SRC_DIR}/*.cpp ${SRC_DIR}/*.hpp)
ENDFOREACH(SRC_DIR)

if(COMPILER_SUPPORTS_CXX20)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
else()
    message(WARNING "The compiler ${CMAKE_CXX_COMPILER} has no C++20 support. Please use a different C++ compiler.")
endif()
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(. SRC_LIST) # 编译源文件
add_library(${PROJECT_NAME} ${SRC_LIST} ${USER_FILE_PATH}) # 编译可执行程序

add_library(sublib::libCPlusPlus20 ALIAS ${PROJECT_NAME})
target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)