#ifndef USER_H
#define USER_H
#include<iostream>
#pragma once

class User {
public:
    User(const std::string& username);

    const std::string& getUsername() const ;

    void askQuestion(const std::string& question, User& recipient);
    void receiveQuestion(const std::string& question, User& sender) ;

private:
    std::string username;
};


#endif