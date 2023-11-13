cmake_minimum_required(VERSION 3.26)
project(C_Games C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Games main.c
        snake.c
        snake.h)
