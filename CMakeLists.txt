cmake_minimum_required(VERSION 3.13.4 FATAL_ERROR)
project(KUKSA-VAL-CLIENT)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_executable(${PROJECT_NAME} src/main.cpp)