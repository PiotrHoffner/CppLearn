cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CppLearn)

set(MainDir ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(Polymorphism)
add_subdirectory(Lottery)