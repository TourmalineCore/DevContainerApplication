include(CTest)

include(FetchContent)
include(GoogleTest)

# Avoid warning about DOWNLOAD_EXTRACT_TIMESTAMP in CMake 3.24:
if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif ()

FetchContent_Declare(gtest
        QUIET
        URL https://github.com/google/googletest/archive/release-1.11.0.tar.gz
        )

# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

set(TEST_TARGET ${CMAKE_PROJECT_NAME}_unit_tests)

# find all c/cpp files and add them into the source list for compilation of unit tests
set(SOURCES
        example_unit_test.cpp
        )

# create a executable with our unit tests
add_executable(${TEST_TARGET} run_unit_tests.cpp ${SOURCES})


gtest_discover_tests(${TEST_TARGET}
        XML_OUTPUT_DIR unit-tests-reports
        # WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )

