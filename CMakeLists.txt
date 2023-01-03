cmake_minimum_required(VERSION 3.15)
project(test CXX)

add_executable(test src/test.cpp src/main.cpp)
target_include_directories(test PUBLIC include)

install(TARGETS test)
