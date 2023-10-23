#include <iostream>
#include <fstream>
#include <vector>

class Book {
private:
    std::string title;
    std::string author;
    float price;

public:
    Book(const std::string& title, const std::string& author, float price);

    void displayInfo() const;

    std::string getTitle() const ;

    //ofstrean file --> file << "Hello Menna"
    //iostream cout --> cout << "Hello Menna"

    // Function to save book to file
    void saveBook(std::ofstream& file) const ;
};
