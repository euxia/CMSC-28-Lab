/*
    Filename: Employees.h
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the header file. This program will get the info's for the employee . All with the usage of OOP's encapsulation and inheritance.
    Date: June 01, 2024
*/

#include <iostream>
#include "Person.h"

// Define class Employee that inherits from class Person
class Employee : public Person {
    // attributes for employee
    private:
        std::string empNum;
    public:
        std::string position;
        std::string office;
        double salary;
        // constructor for employee
        Employee(){}
        // Getters for the object
        std::string getEmpNum() const {return empNum;}
        std::string getPosition() const {return position;}
        std::string getOffice() const {return office;}
        double getSalary() const {return salary;}
        // Setters for the object
        void setEmpNum(const std::string& empID) {this -> empNum = empID;}
        void setPosition(const std::string& position) {this -> position = position;}
        void setOffice(const std::string& office) {this -> office = office;}
        void setSalary(double salary) {this -> salary = salary;}
};
