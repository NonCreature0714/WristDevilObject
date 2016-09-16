cmake_minimum_required(VERSION 3.6)
project(WristDevil)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp WristDevil.cpp WristDevil.h)
add_executable(WristDevil ${SOURCE_FILES})