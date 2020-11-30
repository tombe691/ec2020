cmake_minimum_required(VERSION 3.17)
project(shape)

set(CMAKE_CXX_STANDARD 14)

add_executable(shape main.cpp Shape.cpp Shape.h Box.cpp Box.h Cone.cpp Cone.h Sphere.cpp Sphere.h)