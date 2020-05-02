cmake_minimum_required(VERSION 3.7)

project(mandelbrot)

#set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")


add_subdirectory(Libraries)

add_executable(mandelbrot main.cpp)
target_link_libraries(mandelbrot Mandelbrot)

