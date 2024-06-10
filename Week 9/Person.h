/*
    Filename: Person.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the header file. This program will get the info's for the class Person that will be inhertied by the Employee and Student . All with the usage of OOP's encapsulation and inheritance.
    Date: June 01, 2024
*/


#include <iostream>

// Define class person
class Person {
    //attributes for gender
    protected:
        std::string fname;
        std::string lname;
        std::string gender;
    // constructor for person
    public:
        std::string emailAdd;
        std::string cpNumber;
        Person(){}
        // Getters for the object
        std::string getfName() const {return fname;}
        std::string getlName() const {return lname;}
        std::string getGender() const {return gender;}
        std::string getEmailAdd() const {return emailAdd;}
        std::string getCpNumber() const {return cpNumber;}
        // Setters for the object
        void setfName(const std::string& fname) {this -> fname = fname;}
        void setlName(const std::string& lname) {this -> lname = lname;}
        // Setting Mr. for male and Ms. for female
        void setGender(char gender) {
            if (gender == 'M') {
                this -> gender = "Mr.";
            } else if (gender == 'F') {
                this -> gender = "Ms.";
            } else {
                std::cout << "Invalid gender!!!" << std::endl;
            }
        }
        void setEmailAdd(const std::string& emailAdd) {this -> emailAdd = emailAdd;}
        void setCpNumber(const std::string& cpNumber) {this -> cpNumber = cpNumber;}
};