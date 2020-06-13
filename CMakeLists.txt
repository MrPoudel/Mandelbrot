cmake_minimum_required(VERSION 3.7)

project(mandelbrot)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

enable_testing()
add_subdirectory(googletest)


#set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")


add_subdirectory(Libraries)

add_executable(mandelbrot main.cpp)
target_link_libraries(mandelbrot Mandelbrot)

add_subdirectory(test)

