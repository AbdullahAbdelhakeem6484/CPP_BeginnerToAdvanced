#include <iostream>
#include <string>
#include <vector>
#include "Book.hh"
#include "Library.hh"

int main(){
    Library library;
    std::cout<<"Library Managment System"<<std::endl;
    std::cout<<"---------------------------------------"<<std::endl;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald",1925);
    Book book2("To Kill a Mocking bird", "Harper Lee",1960);
    Book book3("1984", "George Or well ",1949);

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.displayBooks();
    return 0;
}