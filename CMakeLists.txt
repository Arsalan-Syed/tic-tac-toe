cmake_minimum_required(VERSION 3.12)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(tic_tac_toe main.cpp grid.cpp grid.h game.cpp game.h)