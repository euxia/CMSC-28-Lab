/*
    Filename: natibidadPE06.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program get the details for the movie and print it. All with the usage of OOP.
    Date: May 19, 2024
*/

#include <iostream>
#include <vector>
#include "Movie.h"  
#include <limits>

int main() {

    std::cout << "\nThis program will get all the information about a Movie and Prints it, all with the usage of OOP" << std::endl;
    std::cout << "Programmed by: Deniel Dave C. Natividad of N-1L" << std::endl;
    // Initiating all the variables
    std::string title;
    std::string synopsis;
    float rating;
    std::string genre;
    int choice = 0; //For the do-while loops
    std::string firstname;
    std::string lastname;
    char gender;
    // Object calls
    Person p;
    Movie m;

    // Entering each movie details
    std::cout << "\n-------------------------------------------" << std::endl;
    std::cout << "Enter Movie Details" << std::endl;

    std::cout << "Movie Title: ";
    std::getline(std::cin, title);
    m.setTitle(title);

    std::cout << "Movie Synopsis: ";
    std::getline(std::cin, synopsis);
    m.setSynopsis(synopsis);

    std::cout << "MPAA Rating (0.0/5.0): ";
    std::cin >> rating;
    m.setRating(rating);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Do while for list of genres, actors and directors
    do {
        std::cout << "(Enter 1 if enough genre(s) is entered)" << std::endl;
        std::cout << "Genre: ";
        std::getline(std::cin, genre);
    
        if (genre != "1") {
            m.setGenre(genre);
        } else {
            choice = 1;
        }
    } while (!choice);

    choice = 0;
    do {
        std::cout << "(Enter 1 if enough director/s is entered)" << std::endl;
        std::cout << "First Name of Director: ";
        std::getline(std::cin, firstname);
        if (firstname == "1") { break; }
        p.setfName(firstname);
        std::cout << "Last Name of Director: "; 
        std::getline(std::cin, lastname);
        p.setlName(lastname);
        std::cout << "Gender of Director (M/F): ";
        std::cin >> gender;
        p.setGender(gender);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        m.setDirector(p);
    } while (!choice);

    do {
        std::cout << "(Enter 1 if enough actor/s is entered)" << std::endl;
        std::cout << "First Name of Actor: ";
        std::getline(std::cin, firstname);
        if (firstname == "1") { break; }
        p.setfName(firstname);
        std::cout << "Last Name of Actor: "; 
        std::getline(std::cin, lastname);
        p.setlName(lastname);
        std::cout << "Gender of Actor (M/F): ";
        std::cin >> gender;
        p.setGender(gender);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        m.setActor(p);
    } while (!choice);

    // Printing the movie details using the gerrts
    std::cout << "=============================================" << std::endl;
    std::cout << "MOVIE DETAILS" << std::endl;
    std::cout << "Title: " << m.getTitle() << std::endl;
    std::cout << "Synopsis: " << m.getSynopsis() << std::endl;

    // A vector of string of genres
    std::vector<std::string> genres = m.getGenre();
    // Printing using a loop
    for(std::vector<std::string>::size_type i = 0; i < genres.size(); i++) {
        if (i == 0) { std::cout << "Genre(s): " << genres[0]; }
        else {std::cout << ", " << genres[i];}
    }
    std::cout << std::endl;

    // A vector of the directors each with a vector of its attributes (fname, lname, gender)
    std::vector<std::vector<std::string>> directors = m.getDirectors();
    for(std::vector<std::vector<std::string>>::size_type i = 0; i < directors.size(); i++) {
        if (i == 0) { std::cout << "Director(s): " << directors[i][2] << " " << directors[i][0] << " " << directors[i][1]; }
            else {std::cout << ", " << directors[i][2] << " " << directors[i][0] << " " << directors[i][1];}
    }
    std::cout << "\n";

    // A vector of the directors each with a vector of its attributes (fname, lname, gender)
    std::vector<std::vector<std::string>> actors = m.getActors();
    for(std::vector<std::vector<std::string>>::size_type i = 0; i < actors.size(); i++) {
        if (i == 0) { std::cout << "Actor(s): " << actors[i][2] << " " << actors[i][0] << " " << actors[i][1]; }
        else {std::cout << ", " << actors[i][2] << " " << actors[i][0] << " " << actors[i][1];}
    }
    std::cout << "\n=============================================" << std::endl;

    return 0;
}
