add_library(MandelbrotHeaders INTERFACE)

add_library(Mandelbrot ${EMPTY_SOURCE})
target_link_libraries(Mandelbrot
    PUBLIC
    MandelbrotHeaders   
)

add_subdirectory(include)
add_subdirectory(src)