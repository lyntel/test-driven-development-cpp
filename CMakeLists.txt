cmake_minimum_required(VERSION 3.19)
project(test-driven-development-cpp C CXX ASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_C_STANDARD 11)

add_subdirectory(src)

if(NOT CMAKE_CROSSCOMPILING)
    enable_testing()
    add_subdirectory(test)
endif()
