#include "Doctor.hpp"

// Constructor
Doctor::Doctor(const std::string& name, const std::string& specialization) 
    : name(name), specialization(specialization) {
    // Implement the constructor
}

// Getter methods
const std::string& Doctor::getName() const {
    return name;
}

const std::string& Doctor::getSpecialization() const {
    return specialization;
}
