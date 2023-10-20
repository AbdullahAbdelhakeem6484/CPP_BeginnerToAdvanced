cmake_minimum_required(VERSION 3.0)
project(AskFmProject)

# Set C++ standard 04_Projects/01_Beginner/01_OnlineBookstoreManagement/CMakeLists.txtto C++11
set(CMAKE_CXX_STANDARD 11)

# Source files
set(SOURCES
    app.cc

)

set(HEADERS
    files.hh

)

# Add an executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
