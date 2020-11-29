cmake_minimum_required(VERSION 3.17)
project(Geometriuppgift)

set(CMAKE_CXX_STANDARD 20)

add_executable(Geometriuppgift main.cpp Shape.cpp Box.cpp Sphere.cpp Sphere.h Cone.cpp Cone.h)