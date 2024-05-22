// Filename: Natividad_01_04.cpp
// Description: Smallest and Largest Values and their Difference
// Programmer: Deniel Dave C. Natividad
// Date: April 26, 2024
// Subject: CSMC 28

#include <iostream>
// Function for the program description
void progdescription() {
    std::cout << "Name: Deniel Dave C. Natividad\n";
    std::cout << "Date: April 26, 2024\n";
    std::cout << "Section: CMSC 28\n";
    std::cout << "This program will find the smallest and largest values from a set of data.\n";
}
// Function to get the data from the user, using reference parameters
void getdata(int& a, int& b, int& c) {
    std::cout << "\nEnter three integers " << std::endl;
    std::cout << "Enter the first integer: ";
    std::cin >> a;
    std::cout << "Enter the second integer: ";
    std::cin >> b;
    std::cout << "Enter the third integer: ";
    std::cin >> c;
    std::cout << std::endl; 
}
// Function to get the smallest value from the set of data
int getsmall(int a, int b, int c) {
    int small = a;
    if (b < small) {
        small = b;
    }
    if (c < small) {
        small = c;
    }
    return small;
}
// Function to get the largest value from the set of data
int getlarge(int a, int b, int c) {
    int large = a;
    if (b > large) {
        large = b;
    }
    if (c > large) {
        large = c;
    }
    return large;
}
// Function to display the data
void showdata(int a, int b, int c, int small, int large, int diff) {
    std::cout << "The three integers are: " << a << " " << b << " " << c << std::endl;
    std::cout << "The smallest value is: " << small << std::endl;
    std::cout << "The largest value is: " << large << std::endl;
    std::cout << "The difference between the largest and smallest values is: " << diff << std::endl;
}
// Main function
int main(){
    // Declare variables
    int x, y, z;
    int smallval, largeval, diff;
    // Call the functions
    progdescription();
    getdata(x, y, z);   
    smallval = getsmall(x, y, z);
    largeval = getlarge(x, y, z);
    diff = largeval-smallval;
    showdata(x, y, z, smallval, largeval, diff);

    return 0;
}

