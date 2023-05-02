cmake_minimum_required(VERSION 3.13)
include(CMakePrintHelpers)

project(DevContainerApplication)

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)
set(CMAKE_CROSSCOMPILING true)

set(PLATFORM_TOOLCHAIN_PATH /usr/bin)
set(HOST_PLATFORM aarch64-linux-gnu)

set(CMAKE_AR ${PLATFORM_TOOLCHAIN_PATH}/${HOST_PLATFORM}-ar)
set(CMAKE_CXX_COMPILER ${PLATFORM_TOOLCHAIN_PATH}/${HOST_PLATFORM}-g++)
set(CMAKE_LINKER ${PLATFORM_TOOLCHAIN_PATH}/${HOST_PLATFORM}-ld)

set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -static " CACHE INTERNAL "")

cmake_print_variables(CMAKE_CXX_COMPILER)

add_executable(DevContainerApplication-temp main.cpp)
