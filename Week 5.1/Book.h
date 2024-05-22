/*
    Filename: Book.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program has the object declaration for Book
    Date: May 11, 2024
*/
#include <iostream>

// class Book
class Book {
    // attributes of the object as private
    private:
        std::string Title;
        std::string Author;
        std::string ISBN;
        std::string Publisher;

    public:
        // default constructor
        Book() {}
        // constructor with title, author and isbn setted.
        Book(std::string title, std::string author, std::string isbn) {
            Title = title;
            Author = author;
            ISBN = isbn;
        }
        // methods

        // getters for the attributes
        std::string  getTitle() {
            return Title;
        }

        std::string  getAuthor() {
            return Author;
        }

        std::string  getISBN() {
            return ISBN;
        }

        std::string  getPublisher() {
            return Publisher;
        }

        // setters for the attributes
        void setTitle(std::string  bktitle) {
            Title = bktitle;
        }

        void setAuthor(std::string  bkauthor) {
            Author = bkauthor;
        }

        void setISBN(std::string  bkisbn) {
            ISBN = bkisbn;
        }

        void setPublisher(std::string  bkpublisher) {
            Publisher = bkpublisher;
        }
    };