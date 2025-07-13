cmake_minimum_required(VERSION 3.29)
project(Apptimer)

set(CMAKE_CXX_STANDARD 20)

add_executable(Apptimer main.cpp
        Tempo.cpp
        Tempo.h
        Data.cpp
        Data.h
        Timer.cpp
        Timer.h)
