#ifndef  BOOK_H_
#define  BOOK_H_
#include <iostream>
#include <string>
class Book{
    public:
        Book();
        Book(std::string title, std::string author, int publicationYear);

        std::string getTitle();
        std::string getAuthor();
        int getpublicationYear();
        void setTitle(std::string title);
        void setAuthor(std::string author);
        void setpublicationYear(int publicationYear);

    private:
        std::string title;
        std::string author;
        int publicationYear;
};
#endif // !