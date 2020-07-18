cmake_minimum_required(VERSION 3.10)
project(Misc)

add_compile_options(-Wall -Wextra -pedantic)
add_executable(getdigits getdigits.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# below line will linke libm https://stackoverflow.com/a/34628342/2388706
target_link_libraries(getdigits m)