cmake_minimum_required(VERSION 3.6)
project(ompEx)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Trapezoide.c)
add_executable(ompEx ${SOURCE_FILES})