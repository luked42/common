cmake_minimum_required(VERSION 3.10)

project(common VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libs)
add_subdirectory(x_gtest)
add_subdirectory(tests)
