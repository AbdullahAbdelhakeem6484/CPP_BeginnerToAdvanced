#ifndef  LIBRARY_H_
#define  LIBRARY_H_

#include "Book.hh"
#include <vector>

class Library{
    private:
        std::vector <Book> books;
    public:
        void addBook (Book book);
        void displayBooks();
};

#endif