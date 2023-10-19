#include "Order.hh"


    Order::Order(const std::string& username, const std::string& bookTitle)
        : username(username), bookTitle(bookTitle) {}

    // Function to save order to file
    void Order::saveOrder(std::ofstream& file) const {
        file << username << ',' << bookTitle << '\n';
    }

