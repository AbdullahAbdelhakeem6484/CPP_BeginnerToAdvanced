#include "Book.hh"

        Book::Book():Book("" ," " , 0){
            std::cout << "The Book you are entered None !";
        }

        Book::Book(std::string title, std::string author, int publicationYear):
        title(title), author(author), publicationYear(publicationYear){}

        std::string  Book::getTitle(){
            return title;
        }
        std::string  Book::getAuthor(){
            return author;
        }
        int  Book::getpublicationYear(){
            return publicationYear;
        }
        void  Book::setTitle(std::string title){
            this->title =title;
        }
        void  Book::setAuthor(std::string author){
            this -> author = author;
        }
        void  Book::setpublicationYear(int publicationYear){
            this -> publicationYear = publicationYear;
        }