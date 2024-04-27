cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Polymorphism)

set(MainDir ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${MainDir}/include)

add_library(PolymorphismLib
    ${MainDir}/source/Animal.cpp 
    ${MainDir}/source/Cat.cpp 
    ${MainDir}/source/Cow.cpp 
    ${MainDir}/source/Dog.cpp)

add_executable(Polymorphism main.cpp)
target_link_libraries(Polymorphism PolymorphismLib)
