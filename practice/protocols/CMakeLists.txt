project(protocols)
include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/controller_include)
FILE(GLOB SOURCE1 "${PROJECT_SOURCE_DIR}/src/*.c")
FILE(GLOB SOURCE2 "${PROJECT_SOURCE_DIR}/controller_src/*.c")
set(SOURCE ${SOURCE1} ${SOURCE2})
add_executable(app ${SOURCE})

