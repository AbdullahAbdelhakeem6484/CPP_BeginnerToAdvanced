#ifndef PATIENT_H
#define PATIENT_H

#pragma once
#include <string>

class Patient
{
public:
    Patient(const std::string& name, int age, const std::string& g);

    // Getter methods
    const std::string& getName() const;
    int getAge() const;
    const std::string& getGender() const;
    ~Patient();

private:
    std::string name;
    int age;
    std::string gender;

};

#endif