cmake_minimum_required(VERSION 3.16)
project(Semaphores_SOI)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
add_executable(Semaphores_SOI main.cpp fifo.cpp producers.cpp test.cpp fifo.h monitor.h producers.h test.h)