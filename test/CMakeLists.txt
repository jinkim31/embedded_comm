cmake_minimum_required(VERSION 3.16)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(test
        test.cpp
        device_emulator.cpp
        )

target_link_libraries(test ecomm)