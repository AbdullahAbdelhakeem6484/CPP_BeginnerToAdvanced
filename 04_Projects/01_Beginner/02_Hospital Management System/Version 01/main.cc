/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October 19, 2023
* Description: Hospital Management System
* Version : V 1.0.0
* Type: Project
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Patients | Doctors | Appointments
* Outputs: Customer Mking Order and put order in Cart
*
* Algorithm:
*   1.
*
* Note:
*       - Use Cmake version cmake version 3.25.0
*       - GNU Make 4.3
*       - Create Class .cpp & .hpp : ALT + X
*******************************************************/

#include <iostream>
#include "HospitalSystem.hpp"

int main() {
    HospitalSystem hospitalSystem;

    // Add some patients and doctors
    hospitalSystem.addPatient("Alice", 30, "Female");
    hospitalSystem.addPatient("Bob", 45, "Male");

    hospitalSystem.addDoctor("Dr. Smith", "Cardiologist");
    hospitalSystem.addDoctor("Dr. Johnson", "Orthopedist");

    std::tm appointmentTime = {}; // You need to set the time appropriately.
    appointmentTime.tm_year = 123; // Set the year (e.g., 2023 - 1900)
    appointmentTime.tm_mon = 9;    // Set the month (0-based, so 9 is October)
    appointmentTime.tm_mday = 19;  // Set the day of the month
    appointmentTime.tm_hour = 10;  // Set the hour
    appointmentTime.tm_min = 30;   // Set the minutes


    // Schedule appointments
    hospitalSystem.scheduleAppointment(0, 0, appointmentTime);
    hospitalSystem.scheduleAppointment(1, 1, appointmentTime);

    // Display appointments
    hospitalSystem.displayAppointments();




    return 0;
}
