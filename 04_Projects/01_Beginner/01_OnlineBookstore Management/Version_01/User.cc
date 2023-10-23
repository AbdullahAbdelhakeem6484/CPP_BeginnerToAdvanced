#include "User.hh"


    User::User(const std::string& username, const std::string& password)
        : username(username), password(password) {}

    std::string User::getUsername() const {
        return username;
    }

    // Function to save user to file
    void User::saveUser(std::ofstream& file) const {
        file << username << ',' << password << '\n';
    }
