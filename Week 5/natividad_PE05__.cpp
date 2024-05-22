/*
    Filename: natividad_PE05.cpp
    Name: Natividad, Deniel Dave C.
    Section: N-1L
    Description: This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers.
    Date: May 09, 2024
*/


#include <iostream>
#include <limits>
#include <cmath>
#include <tuple>

// class object for statcalc
class StatCalc {
    // public attributed of statcalc
    public:
        int array[10];
        int count = 0; 
    
    // constructor to be instantiated as the object is called.
    StatCalc() {
        description();
        // var for checking input
        int input;
        // loop for populating array
        for (int i = 0; i < 10; i++) {
            std::cout << "Input an Integer: ";
            std::cin >> input;
            if (input == 0){
                break;
            }
            array[i] = input;
            count++;
        }
    }
    // method to find the largest integer.
    int largest() {
        // using max function from the limit header for setting max as positive infinity. 
        int max = std::numeric_limits<int>::max();
        // loop for looking for the max
        for (int i = 0; i < count; i++){
            if (max > array[i]) {
                max = array[i];
            }
        }
        return max;
    }
    // method to find the smallest integer
    int smallest() {
        // using min method for negative infinity.
        int min = std::numeric_limits<int>::min();
        // loop for looking for min
        for (int i = 0; i < count; i++){
            if (min < array[i]) {
                min = array[i];
            }
        }
        return min;
    }
    // using double for precision as it add decimals.
    double average() {
        double sum = 0.0;
        for (int i = 0; i < count; i++){
            sum += array[i];
        }
        return sum/count;
    }
    // using double for precision for the return type of the method.
    double variance() {
        double sum = 0.0;
        double ave = average();
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
    // Printing Result
    void result() {
        std::cout << "Largest = " << largest() << std::endl;
        std::cout << "Smallest = " << smallest() << std::endl;
        std::cout << "Average = " << average() << std::endl;
        std::cout << "Variance = " << variance() << std::endl;
        std::cout << "Standard Deviation = " << sqrt(variance()) << std::endl;
    }
};


int main(){
    // creates an instance of the object class, also calling the constructor within the object. 
    StatCalc statcalc;
    // calls the method of the object statcalc to print the results.
    statcalc.result();
    return 0;
}

