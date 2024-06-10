/*
    Filename: TestEmployees.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This is the program file. This program will get the info's for the employee. All with the usage of OOP's encapsulation and inheritance.
    Date: June 01, 2024
*/

// Calling the header files
#include <iostream>
#include "Employees.h"

int main() {
    // Instantiating the Employee class
    Employee employee;
    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "This program will generate a welcome message based on user input.\n"
            "Programmed by: Deniel Dave C. Natividad\nDate: 01/06/2024\n";
    std::cout << "--------------------------------------------" << std::endl;
    std::string fname, lname, empNum, position, office;
    char gender;
    double salary;

    // Get user input for the attributes of the Employee class using the setter methods.
    std::cout << "Enter first name: ";
    std::getline(std::cin, fname);
    employee.setfName(fname);

    std::cout << "Enter last name: ";
    std::getline(std::cin, lname);
    employee.setlName(lname);

    std::cout << "Enter gender (M or F): ";
    std::cin >> gender;
    employee.setGender(gender);

    std::cin.ignore(10000, '\n');
    std::cout << "Enter employee number: ";
    std::getline(std::cin, empNum);
    employee.setEmpNum(empNum);

    std::cout << "Enter position: ";
    std::getline(std::cin, position);
    employee.setPosition(position);

    std::cout << "Enter office: ";
    std::getline(std::cin, office);
    employee.setOffice(office);

    std::cout << "Enter salary: ";
    std::cin >> salary;
    employee.setSalary(salary);

    std::cin.ignore(10000, '\n');
    std::cout << "Enter email address: ";
    std::getline(std::cin, employee.emailAdd);
    employee.setEmailAdd(employee.emailAdd);

    std::cout << "Enter contact number: ";
    std::getline(std::cin, employee.cpNumber);
    employee.setCpNumber(employee.cpNumber);

    // Display the welcome message using the getter methods.
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Hi " << employee.getGender() << " " << employee.getfName() << " " << employee.getlName() << "!\n"
            "We are pleased to inform you that you are employed as the " << employee.getPosition() << " of the university under the " << employee.getOffice() << " with a salary of " << employee.getSalary() << " Pesos.\n"
            "Your email address is " << employee.getEmailAdd() << " and your contact number is " << employee.getCpNumber() << ".\n"
            "Your employee number is " << employee.getEmpNum() << ".\n";
    std::cout << "--------------------------------------------" << std::endl;
    return 0;
}
