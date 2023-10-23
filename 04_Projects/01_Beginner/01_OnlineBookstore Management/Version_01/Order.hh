#ifndef ORDER_H_
#define ORDER_H_

#include <iostream>
#include <fstream>
#include <vector>

class Order {
private:
    std::string username;
    std::string bookTitle;

public:
    Order(const std::string& username, const std::string& bookTitle);

    // Function to save order to file
    void saveOrder(std::ofstream& file) const ;
};

#endif