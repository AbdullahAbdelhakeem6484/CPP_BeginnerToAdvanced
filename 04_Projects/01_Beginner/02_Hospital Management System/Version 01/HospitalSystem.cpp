#include <chrono>
#include <iomanip>
#include "HospitalSystem.hpp"


// Methods for adding patients and doctors
void HospitalSystem::addPatient(const std::string& name, int age, const std::string& gender) {
    patients.emplace_back(name, age, gender);
}

void HospitalSystem::addDoctor(const std::string& name, const std::string& specialization) {
    doctors.emplace_back(name, specialization);
}
// Method for scheduling appointments
void HospitalSystem::scheduleAppointment(int patientIndex, int doctorIndex, const std::tm& time) {
    if (patientIndex >= 0 && patientIndex < patients.size() && doctorIndex >= 0 && doctorIndex < doctors.size()) {
        appointments.emplace_back(patients[patientIndex], doctors[doctorIndex], time);
    }
}

// Method for displaying appointments
void HospitalSystem::displayAppointments() const {
    std::cout << "Appointments:\n";
    for (const Appointment& appointment : appointments) {
        std::tm time = appointment.getTime();  // Copy to a non-const tm
        std::chrono::system_clock::time_point tp = std::chrono::system_clock::from_time_t(std::mktime(&time));

        auto timepoint = std::chrono::system_clock::to_time_t(tp);
        std::tm timeInfo = *std::localtime(&timepoint);

        std::cout << "Patient: " << appointment.getPatient().getName()
                  << ", Doctor: " << appointment.getDoctor().getName()
                  << ", Time: " << std::put_time(&timeInfo, "%Y-%m-%d %H:%M:%S") << std::endl;
    }
}




// Run the Hospital Management System
void HospitalSystem::run() {
    // Implement your HMS functionality here
}
