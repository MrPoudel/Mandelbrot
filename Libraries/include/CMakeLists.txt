target_sources(MandelbrotHeaders
    INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/Bitmap.h
    ${CMAKE_CURRENT_LIST_DIR}/BitmapFileHeader.h
    ${CMAKE_CURRENT_LIST_DIR}/BitmapInfoHeader.h
    ${CMAKE_CURRENT_LIST_DIR}/FractalCreator.h
    ${CMAKE_CURRENT_LIST_DIR}/Mandelbrot.h
    ${CMAKE_CURRENT_LIST_DIR}/RGB.h
    ${CMAKE_CURRENT_LIST_DIR}/ZoomList.h
    ${CMAKE_CURRENT_LIST_DIR}/Zoom.h
)

target_include_directories(MandelbrotHeaders
    INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)