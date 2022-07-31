cmake_minimum_required(VERSION 3.21)
project(embedded_comm)

set(CMAKE_CXX_STANDARD 14)

add_executable(test
        test/test.cpp
        comm/slave.c
        test/device_emulator.cpp)
