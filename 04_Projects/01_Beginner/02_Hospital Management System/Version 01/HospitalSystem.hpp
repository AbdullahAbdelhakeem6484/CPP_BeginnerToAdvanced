#ifndef HOSPITALSYSTEM_H
#define HOSPITALSYSTEM_H

#pragma once
#include <iostream>
#include <vector>
#include "Patient.hpp"
#include "Doctor.hpp"
#include "Appointment.hpp"

class HospitalSystem {
public:
    void addPatient(const std::string& name, int age, const std::string& gender);
    void addDoctor(const std::string& name, const std::string& specialization);
    void scheduleAppointment(int patientIndex, int doctorIndex, const std::tm& time);
    void displayAppointments() const;
    void run();

private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;
    std::vector<Appointment> appointments;
};


#endif