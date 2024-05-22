/*
    Filename: testBook.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program will test the object in Book.h
    Date: May 11, 2024
*/

#include <iostream>
#include "Book.h"

int main() {
    std::cout << "\nSetting all the attributes using the constructor except the publisher.\n" << std::endl;
    // Test the constructor that takes three parameters
    Book book1("Lord of the Mysteries", "Ai Qianshui de Wuzei", "N/A");

    // Test the getTitle, getAuthor, and getISBN methods
    std::cout << "Book1 Title: " << book1.getTitle() << std::endl;
    std::cout << "Book1 Author: " << book1.getAuthor() << std::endl;
    std::cout << "Book1 ISBN: " << book1.getISBN() << std::endl;
    std::cout << std::endl;
    std::cout << "Setting the publisher by using the set publisher method." << std::endl;
    // Test the setPublisher and getPublisher methods
    book1.setPublisher("Qidian");
    std::cout << "Book1 Publisher: " << book1.getPublisher() << std::endl;
    std::cout << std::endl;

    // Test the default constructor and the setTitle, setAuthor, and setISBN methods

    std::cout << "Setting all the attributes of book class using the setters.\n" << std::endl;
    Book book2;
    book2.setTitle("Lord of the Rings");
    book2.setAuthor("John Ronald Reuel Tolkien");
    book2.setISBN("9878845292613");
    book2.setPublisher("Houghton Mifflin");

    // Printing all the outputs using the setter.
    // Test the getTitle, getAuthor, getISBN, and getPublisher methods
    std::cout << "Book2 Title: " << book2.getTitle() << std::endl;
    std::cout << "Book2 Author: " << book2.getAuthor() << std::endl;
    std::cout << "Book2 ISBN: " << book2.getISBN() << std::endl;
    std::cout << "Book2 Publisher: " << book2.getPublisher() << std::endl;

    return 0;
}