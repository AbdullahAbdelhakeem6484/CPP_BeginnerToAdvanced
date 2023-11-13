#include "Appointment.hpp"


// Constructor
Appointment::Appointment(const Patient& patient, const Doctor& doctor, const std::tm& time) 
    : patient(patient), doctor(doctor), time(time) {
    // Implement the constructor
}

// Getter methods
const Patient& Appointment::getPatient() const {
    return patient;
}

const Doctor& Appointment::getDoctor() const {
    return doctor;
}

const std::tm& Appointment::getTime() const {
    return time;
}
