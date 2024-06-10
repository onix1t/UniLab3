cmake_minimum_required(VERSION 3.28)
project(UniLab3)

set(CMAKE_CXX_STANDARD 14)

include_directories(UniLab3)

add_executable(UniLab3
    UniLab3/x64/Debug/.NETFramework,Version=v4.7.2.AssemblyAttributes.cpp
    UniLab3/MainForm.cpp
    UniLab3/MainForm.h)
