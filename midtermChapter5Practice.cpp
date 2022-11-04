#include <iostream>
#include <iomanip>
#include <cmath>

// chapter 5 (repetition statements)

using namespace std;

int main() {
    // while, for, do while

// basically while is an if statement that loops forever Lmao
    // have to initialize first to make a statement
    // i-- subtracting 1 from i

    //for is finite, while is infinite or undetermined conditional
    // do while do it at least once

    // convert feet to meters display feet from 3-30 in 3 ft increments
    //Write a C++ program that converts feet to meters. 
    //The program should display feet from 3 to 30 in 3-foot 
    //increments and the corresponding meter equivalents. 
    //Use the relationship that 1 meter = 3.28 feet.
    int meter;
    double feet;
    const int START_VAL = 3;
    const int MAX_VAL = 31;

    feet = START_VAL;

    cout << "FEET          METERS" << endl;
    while (feet < MAX_VAL) {
        meter = 3.28 * feet;
        cout << feet << "         " << meter << endl;
        feet++;
    }

    return 0;
}

