cmake_minimum_version(VERSION 3.1)

project(katas)
target_compile_features(katas PRIVATE cxx_std_11)

add_subdirectory(src)
add_executable(katas main.cpp)