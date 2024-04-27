cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Lottery)

set(MainDir ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${MainDir}/include)

add_library(LotteryLib
    ${MainDir}/source/Draw.cpp
    ${MainDir}/source/Lotto.cpp)

add_executable(Lottery main.cpp)
target_link_libraries(Lottery LotteryLib)
