#include "User.hpp"

User::User(const std::string& username) : username(username) {}

    const std::string& User::getUsername() const {
        return username;
    }

    void User::askQuestion(const std::string& question, User& recipient) {
        std::cout << "Abdullah  :: I m Here @ AskQuestion \n";
        recipient.receiveQuestion(question, *this);
    }

    void User::receiveQuestion(const std::string& question, User& sender) {
        std::cout << username << " received a question from " << sender.getUsername() << ": " << question << std::endl;
    }