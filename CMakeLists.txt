cmake_minimum_required(VERSION 3.15)
project(jsc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_CXX_SCAN_FOR_MODULES OFF)


include(FetchContent)
FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11.git
        GIT_TAG v2.11.1
)
FetchContent_MakeAvailable(pybind11)


find_package(Python REQUIRED COMPONENTS Development.Module)


pybind11_add_module(jsc build.cpp)