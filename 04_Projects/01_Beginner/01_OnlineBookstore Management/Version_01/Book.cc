#include"Book.hh"

    Book::Book(const std::string& title, const std::string& author, float price)
        : title(title), author(author), price(price) {}

     void Book::displayInfo() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Price: " << price << "\n";
    }

    std::string Book::getTitle() const {
        return title;
    }

    // Function to save book to file
    void Book::saveBook(std::ofstream& file) const {
        file << title << ',' << author << ',' << price << '\n';
    }
