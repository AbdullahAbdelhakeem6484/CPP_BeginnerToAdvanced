cmake_minimum_required(VERSION 3.0)
project(OnlineBookstoreManagement)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Source files
set(SOURCES
    app.cc
    Book.cc
    User.cc
    Order.cc
)

# Header files
set(HEADERS
    Book.hh
    User.hh
    Order.hh
)

# Add an executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
