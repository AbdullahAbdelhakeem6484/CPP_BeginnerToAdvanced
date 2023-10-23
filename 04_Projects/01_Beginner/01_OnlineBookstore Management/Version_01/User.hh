#ifndef USER_H_
#define USER_H_

#include <iostream>
#include <fstream>
#include <vector>

class User {
private:
    std::string username;
    std::string password;

public:
    User(const std::string& username, const std::string& password);

    std::string getUsername() const ;

    // Function to save user to file
    void saveUser(std::ofstream& file) const;
};

#endif