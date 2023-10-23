/*******************************************************
* Author: Abdullah Abdelhakeem
* Date: October 17, 2023
* Description: Online BookStore Management System
* Version : V 1.0.0
* Type: Project
* Language: C++
* Dependencies: None
* IDE: VS Code
* Compiler: G++
* OS: Windows 10 s
*
* Inputs: Book | User
* Outputs: Customer Mking Order and put order in Cart
*
* Algorithm:
*   1.
*
* Note:
*       - Use Cmake version cmake version 3.25.0
*       - GNU Make 4.3
*******************************************************/
#include"Book.hh"
#include"User.hh"
#include<string>

int main() {
    // Sample book and user
    Book book1("C++ for Beginner ", "ByJourne", 20.0);
    User user1("Menna", "12345");

    // Save book to file
    std::ofstream bookFile("books.txt", std::ios::app);
    if (bookFile.is_open()) {
        book1.saveBook(bookFile);
        bookFile.close();
    } else {
        std::cerr << "Unable to open book file for writing.\n";
        return 1;
    }

    // Save user to file
    std::ofstream userFile("users.txt", std::ios::app);
    if (userFile.is_open()) {
        user1.saveUser(userFile);
        userFile.close();
    } else {
        std::cerr << "Unable to open user file for writing.\n";
        return 1;
    }

    // Reading and displaying books from file
    std::ifstream booksReadFile("books.txt");
    std::string line;
    std::cout << "Books:\n";
    while (std::getline(booksReadFile, line)) {
        std::cout << line << '\n';
    }
    booksReadFile.close();

    // Reading and displaying users from file
    std::ifstream usersReadFile("users.txt");
    std::cout << "\nUsers:\n";
    while (std::getline(usersReadFile, line)) {
        std::cout << line << '\n';
    }
    usersReadFile.close();

    return 0;
}