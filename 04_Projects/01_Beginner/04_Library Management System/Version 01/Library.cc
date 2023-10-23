#include "Library.hh"

        void Library::addBook (Book book){
            books.push_back(book);
        }

        void Library::displayBooks(){
            if(books.empty()){
                std::cout <<"No Books in the library."<<std::endl;
            }
            else{
                std::cout <<"Books in the library:"<<std::endl;
               for( auto & book : books){
                    std::cout <<"Title: " << book.getTitle() << std::endl;
                    std::cout <<"Author: "<< book.getAuthor()<<std::endl;
                    std::cout <<"Publication Year: "<< book.getpublicationYear()<<std:: endl;
                    std::cout <<std::endl<<"---------------------------------------" << std::endl;
                }
            }

        }