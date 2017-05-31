cmake_minimum_required(VERSION 3.7)
project(ExCalculator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Operations.cpp Operations.h)
add_executable(ExCalculator ${SOURCE_FILES})