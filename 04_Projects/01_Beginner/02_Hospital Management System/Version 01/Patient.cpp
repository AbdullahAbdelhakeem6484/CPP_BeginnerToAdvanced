#include "Patient.hpp"




// Constructor
Patient::Patient(const std::string& name, int age, const std::string& g)
    : name(name), age(age), gender(g) {

    }

const std::string& Patient::getName() const {
    return name;
}

int Patient::getAge() const {
    return age;
}

const std::string& Patient::getGender() const {
    return gender;
}

Patient::~Patient()
{

}
