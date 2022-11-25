cmake_minimum_required(VERSION 3.16)
project(ecomm)

set(CMAKE_CXX_STANDARD 14)

add_library(ecomm
        src/ecomm.c
        )

target_include_directories(${PROJECT_NAME} PUBLIC inc)