cmake_minimum_required(VERSION 3.21)
project(MutationTestingExample)

set(CMAKE_CXX_STANDARD 14)


# Set source files for RELEASE target
set(RELEASE_SOURCE_FILES
#        find.cpp
        main.cpp)

add_executable(MutationTestingExampleMain ${RELEASE_SOURCE_FILES})


# Set source files for TEST target
set(TEST_SOURCE_FILES
        tests.cpp)

# Create TEST target
add_executable(MutationTestingExampleTest ${TEST_SOURCE_FILES})


# googletest subproject
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
# Specify that Tests relies on "gtest" Link library
target_link_libraries(MutationTestingExampleTest gtest)
