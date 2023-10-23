cmake_minimum_required(VERSION 3.0)
project(HospitalSystem)

# Set C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)

# Source files
set(SOURCES
    main.cc
    Doctor.cpp
    Appointment.cpp
    HospitalSystem.cpp
    Patient.cpp
)

# Header files
set(HEADERS
    Appointment.hpp
    Doctor.hpp
    HospitalSystem.hpp
    Patient.hpp

)

# Add an executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
