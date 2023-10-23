#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#pragma once
#include "Patient.hpp"
#include "Doctor.hpp"
#include <ctime>

class Appointment {
public:
    Appointment(const Patient& patient, const Doctor& doctor, const std::tm& time);

    // Getter methods
    const Patient& getPatient() const;
    const Doctor& getDoctor() const;
    const std::tm& getTime() const;

private:
    Patient patient;
    Doctor doctor;
    std::tm time;
};


#endif