#include "AskFm.hpp"

void AskFM::addUser(const std::string& username) {
        users.push_back(User(username));
        // users.emplace_back(User(username));
    }

    User* AskFM::findUser(const std::string& username) {
        for (User &user : users) {
            if (user.getUsername() == username) {
                return &user;
            }
        }
        return nullptr;
    }