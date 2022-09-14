project(app)
cmake_minimum_required(VERSION 3.23.2)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/controller_include ${PROJECT_SOURCE_DIR}/ardino/include)
FILE(GLOB SOURCE1 "${PROJECT_SOURCE_DIR}/src/*.c")
FILE(GLOB SOURCE2 "${PROJECT_SOURCE_DIR}/controller_src/*.c")
set(SOURCE ${SOURCE1} ${SOURCE2})
add_executable(app ${SOURCE})


target_link_libraries(app ${PROJECT_SOURCE_DIR}/ardino/build/libardino.a)

