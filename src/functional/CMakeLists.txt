cmake_minimum_required(VERSION 3.10)
project(hello)

add_compile_options(-Wall -Wextra -pedantic)
add_executable(hello hello.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
