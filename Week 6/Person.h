/*
    Filename: Movie.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: header file for Person object
    Date: May 19, 2024
*/


#include <iostream>
#include <vector>

// Define class person
class Person {
    //attributes for gender
    public:
        std::string fname;
        std::string lname;
        std::string gender;
    // constructor for person
    Person(){}

    // Getters for the object
    std::string getfName() {return fname;}
    std::string getlName() {return lname;}
    std::string getGender() {return gender;}
    // Setters for the object
    void setfName(std::string fName) {fname = fName;}
    void setlName(std::string lName) {lname = lName;}
    // Setting Mr. for male and Ms. for female
    void setGender(char Gender) {
        if (Gender == 'M') {
            gender = "Mr.";
        } else if (Gender == 'F') {
            gender = "Ms.";
        } else {
            std::cout << "Invalid gender!!!" << std::endl;
        }
    }
    // Method for making all the attributes of the object to a vector which will become the attributes of director and actors.
    std::vector<std::string> toVector() const {
        return {fname, lname, gender}; // Convert char to string
    }
};