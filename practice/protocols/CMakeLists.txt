project(protocols)
include_directories(${PROJECT_SOURCE_DIR}/include)
FILE(GLOB SOURCE "${PROJECT_SOURCE_DIR}/src/*.c")
add_executable(app ${SOURCE})