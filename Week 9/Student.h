/*
    Filename: Student.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the header file. This program will get the info's for the student. All with the usage of OOP's encapsulation and inheritance.
    Date: June 01, 2024
*/

#include <iostream>
#include "Person.h"

// Define class Student
class Student : public Person {
    private:
        std::string studNum;
    public:
        std::string course;
        std::string department;
        std::string college;
        // constructor for student
        Student(){}
        // Getters for the object
        std::string getStudNum() const {return studNum;}
        std::string getCourse() const {return course;}
        std::string getDepartment() const {return department;}
        std::string getCollege() const {return college;}
        // Setters for the object
        void setStudNum(const std::string& studNum) {this -> studNum = studNum;}
        void setCourse(const std::string& course) {this -> course = course;}
        void setDepartment(const std::string& department) {this -> department = department;}
        void setCollege(const std::string& college) {this -> college = college;}
};