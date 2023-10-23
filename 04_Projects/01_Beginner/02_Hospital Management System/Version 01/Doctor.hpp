#ifndef DOCTOR_H
#define DOCTOR_H

#pragma once
#include <string>

class Doctor {
public:
    Doctor(const std::string& name, const std::string& specialization);

    // Getter methods
    const std::string& getName() const;
    const std::string& getSpecialization() const;

private:
    std::string name;
    std::string specialization;
};


#endif