cmake_minimum_required(VERSION 3.16)
project(ecomm)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(ecomm)
add_subdirectory(test)

target_link_libraries(test ecomm)