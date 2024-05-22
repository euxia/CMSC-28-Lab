/*
    Filename: Movie.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: header file for Movie object
    Date: May 19, 2024
*/

#include <iostream>
#include <vector>
#include "Person.h"

// Object movie that inherits from Person
class Movie : public Person {
    // Attributes of object movie
    public:
        std::string title;
        std::string synopsis;
        float rating;
        std::vector <std::string> genres; //Used vectors for multiple genres, directors and actors
        std::vector<Person> director;
        std::vector<Person> actor;
    // Constructor
    Movie(){}
    // Getters of the object
    std::string getTitle() {return title;}
    std::string getSynopsis() {return synopsis;}
    float getRating() {return rating;}

    // Used vectors for the getters
    std::vector <std::string> getGenre() {return genres;}
    //Nested vector for each director/actors and their attributes
    std::vector<std::vector<std::string>> getDirectors() {
        std::vector<std::vector<std::string>> directors;
        for (const auto& director : this->director) {
            directors.push_back(director.toVector());
        }
        return directors;
    }
    std::vector<std::vector<std::string>> getActors() {
        std::vector<std::vector<std::string>> actors;
        for (const auto& actor : this->actor) {
            actors.push_back(actor.toVector());
        }
        return actors;
    }

    // Setters
    void setTitle(std::string Title) { title = Title; }
    void setSynopsis(std::string Synopsis) { synopsis = Synopsis; }
    void setRating(float Rating) { rating = Rating; }
    // Push back to add to the end of the vector
    void setGenre(std::string Genre) { genres.push_back(Genre); }
    void setDirector(const Person& director) { 
        this->director.push_back(director); 
    }
    void setActor(const Person& actor) { 
        this->actor.push_back(actor); 
    }
};