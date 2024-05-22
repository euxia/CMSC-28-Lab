// File: Personobject.cpp
#include <iostream>
#include "Person.h"
#include "Name.h"

int main() {
    int age;
    char gender;
    std::string fname;
    std::string lname;

    std::cout << "Creating the 1st Person object (p) using the 1st Constructor" << std::endl;
    Person p;
    Name n;

    std::cout << "Input First Name: ";
    std::cin >> fname;
    n.setfname(fname);

    std::cout << "Input Last Name: ";
    std::cin >> lname;
    n.setlname(lname);

    std::cout << "Input age: ";
    std::cin >> age;
    p.setAge(age);

    std::cout << "Input gender: ";
    std::cin >> gender;
    p.setGender(gender);

    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "First Name = " << n.getfname() << std::endl;
    std::cout << "Last Name = " << n.getlname() << std::endl;
    std::cout << "Age = " << p.getAge() << std::endl;
    std::cout << "Generation = " << p.generation(age) << std::endl;
    std::cout << "Gender = " << p.getGender() << std::endl;

    return 0;
}