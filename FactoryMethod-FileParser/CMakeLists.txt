cmake_minimum_required(VERSION 3.10)
project(FileParser)

#use c++17 or higher
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#include header files 
include_directories(include)

#include cc files
file(GLOB SOURCES "src/*.cc")

#create executable
add_executable(file_parser ${SOURCES})