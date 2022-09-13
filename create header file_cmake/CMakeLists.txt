# Cmake Project Static linking a library to main app

project(app)

cmake_minimum_required(VERSION 3.23.2)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/testlibrary/include)

FILE(GLOB SOURCE "${PROJECT_SOURCE_DIR}/src/*.c")

add_executable(myapp ${SOURCE})

target_link_libraries(myapp ${PROJECT_SOURCE_DIR}/testlibrary/build/libapp.a)
