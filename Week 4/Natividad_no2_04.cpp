// Filename: Natividad_02_04.cpp
// Description: Converting integer to binary
// Programmer: Deniel Dave C. Natividad
// Date: April 26, 2024
// Subject: CSMC 28

#include <iostream>
#include <string>
// Function for the program description
void progdescription() {
    std::cout << "Name: Deniel Dave C. Natividad\n";
    std::cout << "Date: April 26, 2024\n";
    std::cout << "Section: CMSC 28\n";
    std::cout << "This program will convert an integer to its binary equivalent.\n";
}
// Function to get the data from the user
int getdata() {
    int a;
    std::cout << "\nEnter an integer: ";
    std::cin >> a;
    std::cout << std::endl;
    return a;
}
// Function to convert the integer to binary. We used string as integer cannot hold a large number of digits.
std::string inttoBinary(int a) {
    // Start with an empty string
    std::string binary = "";
    // While loop until int a is less than 0
    while (a > 0) {
        // If a is divisible by 2, add 0 to the string. If not, add 1. Note that we are adding the new digit to the left of the string.
        if (a % 2 == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        a = a / 2;
    }
    return binary;
    
}
// Function to display the data
void showdata(int a, std::string binary) {
    std::cout << "The integer to be converted is " << a << "." << std::endl;
    std::cout << "The binary equivalent is " << binary << "." << std::endl;
}
// Main function
int main(){
    // Declare variables
    int a;
    std::string binary;
    // Call the functions
    progdescription();
    a = getdata();  
    binary = inttoBinary(a);
    showdata(a, binary);
    return 0;
}

