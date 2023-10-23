cmake_minimum_required(VERSION 3.0)
project(LibraryManagmentSystem)

set(CMAKE_CXX_STANDARD 17)

set (SOURCES
    ../app.cc
    ../Book.cc
    ../Library.cc)

set(HEADERS
    ../Book.hh
    ../Library.hh)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})