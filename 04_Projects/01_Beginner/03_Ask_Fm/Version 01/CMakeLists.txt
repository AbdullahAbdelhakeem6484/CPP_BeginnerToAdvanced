cmake_minimum_required(VERSION 3.5)  # Update minimum required version

project(AskFm)

# Set C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)

# Source files
set(SOURCES
    app.cc
    AskFm.cpp
    User.cpp)

# Header files
set(HEADERS
    AskFm.hpp
    User.hpp)

# Add an executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
