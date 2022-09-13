project(libraryapp)

cmake_minimum_required(VERSION 3.23.2)

include_directories(${PROJECT_SOURCE_DIR}/include)

FILE(GLOB SOURCE "${PROJECT_SOURCE_DIR}/src/*.c")

add_library(app STATIC ${SOURCE})


