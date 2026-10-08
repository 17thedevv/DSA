cmake_minimum_required(VERSION 3.20)

project(DSA
    VERSION 0.1.0
    DESCRIPTION "Data Structures and Algorithms library from scratch in C++20"
    LANGUAGES CXX
)

# Yêu cầu chuẩn C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Xuất compile_commands.json cho IntelliSense
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Cờ cảnh báo
if(MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# File thực thi dùng để chạy thử nghiệm các CTDL
add_executable(dsa_playground src/main.cpp)

# Thư mục include để có thể #include "dsa/vector.h"
target_include_directories(dsa_playground PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
