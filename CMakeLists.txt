cmake_minimum_required(VERSION 3.13)
include(CMakePrintHelpers)

set(PROJECT_NAME "DevContainersApp")

project(${PROJECT_NAME})

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

# Create a new target with Main library
add_library(${PROJECT_NAME} STATIC)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"/"interface")

target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"
        ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"/"test_modules_a"
        ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"/"test_modules_b"
        ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"/"test_modules_c"
        ${CMAKE_CURRENT_SOURCE_DIR}/"test_modules"/"test_modules_d"
)

target_sources(${PROJECT_NAME} PUBLIC
        "test_modules/test_lib.cpp"

        "test_modules/test_modules_a/test_module1a.cpp"
        "test_modules/test_modules_a/test_module2a.cpp"
        "test_modules/test_modules_a/test_module3a.cpp"

        "test_modules/test_modules_b/test_module1b.cpp"

        "test_modules/test_modules_c/test_module1c.cpp"
        "test_modules/test_modules_c/test_module2c.cpp"

        "test_modules/test_modules_d/test_module1d.cpp"
        "test_modules/test_modules_d/test_module2d.cpp"
        "test_modules/test_modules_d/test_module3d.cpp"
        "test_modules/test_modules_d/test_module4d.cpp"
        "test_modules/test_modules_d/test_module5d.cpp"
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        # where the library itself will look for its internal headers
        ${CMAKE_CURRENT_SOURCE_DIR}/test_modules
)

add_executable(DevContainerApplication-temp main.cpp)
target_link_libraries(DevContainerApplication-temp LINK_PUBLIC ${PROJECT_NAME} -static-libgcc -static-libstdc++ -static)