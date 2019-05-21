cmake_minimum_required(VERSION 3.14)
project(AnnealingOptimisation)

set(CMAKE_CXX_STANDARD 17)

add_executable(AnnealingOptimisation main.cpp functions.h functions.cpp functions.h randomNum.cpp randomNum.h optMethods.cpp optMethods.h randomNum.cpp randomNum.h)