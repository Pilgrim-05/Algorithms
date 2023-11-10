cmake_minimum_required(VERSION 3.5)

project(DynamicArray LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS dynamic_array.h)
set(SRC main.cpp)

add_executable(DynamicArray ${HEADERS} ${SRC})
