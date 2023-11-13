#ifndef ASKFM_H
#define ASKFM_H

#pragma once
#include<iostream>
#include<vector>
#include "User.hpp"

class AskFM {
public:
    void addUser(const std::string& username) ;

    User* findUser(const std::string& username) ;

private:
    std::vector<User> users;
};


#endif