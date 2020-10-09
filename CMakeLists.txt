cmake_minimum_required(VERSION 3.8)
project(cv2)

set(CMAKE_CXX_STANDARD 14)

include_directories("E:\\OpenCV\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\include")

set(TARGET_LIBS
        "E:\\OpenCV\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\x64\\mingw\\lib\\libopencv_core411.dll.a"
        "E:\\OpenCV\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\x64\\mingw\\lib\\libopencv_highgui411.dll.a"
        "E:\\OpenCV\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\x64\\mingw\\lib\\libopencv_highgui411.dll.a"
        "E:\\OpenCV\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\OpenCV-MinGW-Build-OpenCV-4.1.1-x64\\x64\\mingw\\lib\\libopencv_imgcodecs411.dll.a"
        )

add_executable(cv2 main.cpp)

target_link_libraries(cv2 ${TARGET_LIBS})