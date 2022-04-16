cmake_minimum_required(VERSION 3.20)
project(Proc)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proc main.cpp container.cpp container.h text.cpp text.h shift.h shift.cpp replace.cpp replace.h)
