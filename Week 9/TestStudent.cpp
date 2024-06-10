/*
    Filename: TestStudent.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the program file. This program will get the info's for the student. All with the usage of OOP's encapsulation and inheritance.
    Date: June 01, 2024
*/

// Calling the header files
#include <iostream>
#include "Student.h"


int main() {
    // Create an instance of the Student class
    Student student;
    // Introduction of the program
    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "This program will generate a welcome message based on user input.\n"
            "Programmed by: Deniel Dave C. Natividad\nDate: 01/06/2024\n";
    std::cout << "--------------------------------------------" << std::endl;
    // Get user input for the attributes of the Student class using the setter methods.
    std::string fname, lname, studNum, course, department, college;
    char gender;
    std::cout << "Enter first name: ";
    std::getline(std::cin, fname);
    student.setfName(fname);

    std::cout << "Enter last name: ";
    std::getline(std::cin, lname);
    student.setlName(lname);

    std::cout << "Enter gender (M or F): ";
    std::cin >> gender;
    student.setGender(gender);

    std::cin.ignore(10000, '\n'); // Clear the input buffer
    std::cout << "Enter student number: ";
    std::getline(std::cin, studNum);
    student.setStudNum(studNum);

    std::cout << "Enter course: ";
    std::getline(std::cin, course);
    student.setCourse(course);

    std::cout << "Enter department: ";
    std::getline(std::cin, department);
    student.setDepartment(department);

    std::cout << "Enter college: ";
    std::getline(std::cin, college);
    student.setCollege(college);
    
    std::cout << "Enter email address: ";
    std::getline(std::cin, student.emailAdd);
    student.setEmailAdd(student.emailAdd);

    std::cout << "Enter contact number: ";
    std::getline(std::cin, student.cpNumber);
    student.setCpNumber(student.cpNumber);

    // Display the welcome message using the getter methods.
    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "Hi " << student.getGender() << " " << student.getfName() << " " << student.getlName() << "!\n"
            "We are pleased to inform you that you are admitted in the " << student.getCourse() << " program under the " << student.getDepartment() << ", " << student.getCollege() << ".\n"
            "Your email address is " << student.getEmailAdd() << " and your contact number is " << student.getCpNumber() << ".\n"
            "Your Student number is " << student.getStudNum() << ".\n";
    std::cout << "--------------------------------------------" << std::endl;

    return 0;
}