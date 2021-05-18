cmake_minimum_required(VERSION 3.16)
project(logarithm_example C)

set(CMAKE_C_STANDARD 11)

add_executable(logarithm_example main.c)
target_link_libraries(logarithm_example m)