cmake_minimum_required (VERSION 2.6)
set (CMAKE_CXX_STANDARD 11)

# This names our project
project (prob2)

enable_testing()
add_test( Tests testing)

include_directories(../)
include_directories(../utils)

add_executable(testing test.cpp)

