cmake_minimum_required(VERSION 3.19)
project(cpp_module03)

set(CMAKE_CXX_STANDARD 98)

file(GLOB EX00 ex00/*.cpp ex00/*.hpp)
add_executable(ex00 ${EX00})


file(GLOB EX01 ex01/*.cpp ex01/*.hpp)
add_executable(ex01 ${EX01})


file(GLOB EX02 ex02/*.cpp ex02/*.hpp)
add_executable(ex02 ${EX02})

file(GLOB EX03 ex03/*.cpp ex03/*.hpp)
add_executable(ex03 ${EX03})
