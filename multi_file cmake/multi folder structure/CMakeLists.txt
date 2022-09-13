project(app)

cmake_minimum_required(VERSION 3.23.2)

include_directories(${PROJECT_SOURCE_DIR}/adc_include ${PROJECT_SOURCE_DIR}/i2c_include 
${PROJECT_SOURCE_DIR}/spi_include ${PROJECT_SOURCE_DIR}/uart_include)

FILE(GLOB SOURCE1 "${PROJECT_SOURCE_DIR}/src/*.c")
FILE(GLOB SOURCE2 "${PROJECT_SOURCE_DIR}/adc_src/*.c")
FILE(GLOB SOURCE3 "${PROJECT_SOURCE_DIR}/i2c_src/*.c")
FILE(GLOB SOURCE4 "${PROJECT_SOURCE_DIR}/spi_src/*.c")
FILE(GLOB SOURCE5 "${PROJECT_SOURCE_DIR}/uart_src/*.c")

set(SOURCEALL ${SOURCE1} ${SOURCE2} ${SOURCE3} ${SOURCE4} ${SOURCE5})

add_executable(myapp ${SOURCEALL})