/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October 20, 2023
* Description: Ask Fm System
* Version : V 1.0.0
* Type: Project
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10
*
* Inputs: Users | Ask Fm
* Outputs: Asm and Receive Question
*
* Algorithm:
*   1.
*
* Note:
*       - Use Cmake version cmake version 3.25.0
*       - GNU Make 4.3
*       - Create Class .cpp & .hpp : ALT + X
*******************************************************/
#include "AskFm.hpp"

int main() {
    AskFM askfm;
    askfm.addUser("UserA");
    askfm.addUser("UserB");

    User* userA = askfm.findUser("UserA");
    User* userB = askfm.findUser("UserB");

    if (userA && userB) {
        userA->askQuestion("How are you?", *userB);
    }

    return 0;
}