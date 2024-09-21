cmake_minimum_required(VERSION 3.5.0)
project(CHIP8 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(CHIP8 src/main.cpp src/chip8cpu.h src/chip8cpu.cpp)

