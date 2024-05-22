// File:  Person.h
#include <iostream>

class Person {
private:
    int age;
    char gender;

public:
    Person(){}

    void setAge(int newage) {
        if (newage >= 0) {
            age = newage;
        } else {
            std::cout << "Invalid age!!!" << std::endl;
        }
    }

    int getAge() {
        return age;
    }

    void setGender(char c) {
        if (c == 'M' || c == 'F') {
            gender = c;
        } else {
            std::cout << "Invalid gender!!!" << std::endl;
        }
    }

    char getGender() {
        return gender;
    }

    void view() {
        std::cout << "Person age is = " << getAge() << std::endl;
        std::cout << "Person gender is = " << getGender() << std::endl;
    }

    void view(int age) {
        std::cout << "Person age is = " << age << std::endl;
        std::cout << "Person gender is = " << getGender() << std::endl;
    }

    void view(int age, char gender) {
        std::cout << "Person age is = " << age << std::endl;
        std::cout << "Person gender is = " << gender << std::endl;
    }

    std::string generation(int age) {
        int birthYear = 2024 - age;

        if (1901 <= birthYear && birthYear <= 1927) {
            return "Greatest Generation";
        } else if (1928 <= birthYear && birthYear <= 1945) {
            return "Silent Generation";
        } else if (1946 <= birthYear && birthYear <= 1964) {
            return "Boomers";
        } else if (1965 <= birthYear && birthYear <= 1980) {
            return "Generation X";
        } else if (1981 <= birthYear && birthYear <= 1996) {
            return "Millennials";
        } else if (1997 <= birthYear && birthYear <= 2010) {
            return "Generation Z";
        } else if (2011 <= birthYear && birthYear <= 2024) {
            return "Generation Z";       
        } else {
            return "Unknown Generation";
        }
    }
};