/*
    Filename: natividad_PE05.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers.
    Date: May 11, 2024
*/


#include <iostream>
#include <limits>
#include <cmath>
#include <tuple>

// using tuple for double return values
std::tuple<int*, int> input(){
    // dynamically allocate memory as we use pointer
    int* array = new int[10];
    int input;
    int count = 0;
    // loop for populating array
    for (int i = 0; i < 10; i++){
        std::cout << "Input an Integer: ";
        std::cin >> input;
        if (input == 0){
            break;
        }
        array[i] = input;
        count++;
    }
    // make tuple for returning two values
    return std::make_tuple(array, count);
}

// function to find the largest integer.
int largest (int* array, int count) {
    // using max function from the limit header for setting max as positive infinity.
    int max = std::numeric_limits<int>::min();
    // loop for looking for the max
    for (int i = 0; i < count; i++){
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}
// function to find the smallest integer
int smallest (int* array, int count) {
    // using min method for negative infinity.
    int min = std::numeric_limits<int>::max();
    // loop for looking for min
    for (int i = 0; i < count; i++){
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}
// using double for precision as it add decimals.
double average (int* array, int count) {
    double sum = 0.0;
    for (int i = 0; i < count; i++){
        sum += array[i];
    }
    return sum/count;
}
// using double for precision for the return type of the function
double variance(int* array, int count, double ave){
    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += pow((array[i] - ave), 2);
    }
    return sum/count;
}
// Description
void description() {
    std::cout << "\nProgramming Exercise 05" << std::endl;
    std::cout << "Submitted by: Deniel Dave C. Natividad" << std::endl;
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
    std::cout << "This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers." << std::endl;
    std::cout << std::endl;
}
// printing result
void result(int max, int min, double ave,  double var, double stdev) {
    std::cout << "Largest = " << max << std::endl;
    std::cout << "Smallest = " << min << std::endl;
    std::cout << "Average = " << ave << std::endl;
    std::cout << "Standard Deviation = " << stdev << std::endl;
    std::cout << "Variance = " << var << std::endl;
}

// main function
int main(){
    // function calls
    description();
    // pointer to the array
    int* array;
    int count;
    // tie for getting the two values from the function
    std::tie(array,count) = input();
    int max = largest(array, count);
    int min = smallest(array, count);
    double ave = average(array, count);
    double var = variance(array, count, ave);
    double stdev = sqrt(var);
    result(max, min, ave, var, stdev);
    
    return 0;
}