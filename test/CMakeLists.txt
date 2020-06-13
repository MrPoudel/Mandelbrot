cmake_minimum_required(VERSION 3.7)

set(SOURCES
    MandelbrotTest.cpp
)

add_executable(MandelbrotTest ${SOURCES})
target_link_libraries(MandelbrotTest PUBLIC
 gtest_main
 Mandelbrot 
)

add_test(
    NAME MandelbrotTest
    COMMAND MandelbrotTest
)