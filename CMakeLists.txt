cmake_minimum_required(VERSION 3.0.0)
project(CMakeProject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(CMakeProject main.cpp)
set_property(TARGET CMakeProject PROPERTY CXX_STANDARD 11)