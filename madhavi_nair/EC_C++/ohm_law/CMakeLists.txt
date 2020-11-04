cmake_minimum_required(VERSION 3.17)
project(ohm_law)

set(CMAKE_CXX_STANDARD 20)

add_executable(ohm_law main.cpp ohms_functions.cpp ohms_functions.h)