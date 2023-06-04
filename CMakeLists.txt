cmake_minimum_required(VERSION 3.24)
project(CPP_Lecture)

set(CMAKE_CXX_STANDARD 23)

include_directories(2_Objektorientierung/2_2_HeaderFiles)

add_executable(code_cpp
        2_Objektorientierung/2_2_HeaderFiles/main.cpp
        2_Objektorientierung/2_2_HeaderFiles/Person.cpp
        2_Objektorientierung/2_2_HeaderFiles/Person.hpp
        2_Objektorientierung/2_2_HeaderFiles/Vehicle.cpp
        2_Objektorientierung/2_2_HeaderFiles/Vehicle.hpp)
