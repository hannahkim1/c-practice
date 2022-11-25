// Quiz 6 Question 2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void calc_volts(double[], double[], double[]);
// void because the results should be displayed inside the main

int main() {
    double volts[10] = {};
    double current[10] = {10.63, 14.89, 13.21, 16.55, 18.62, 9.47, 6.85, 18.32, 12.15, 3.98};
    double resistance[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};

    calc_volts(volts, current, resistance);

    cout << "Volts" << endl;
    cout << "-----" << endl;

    for (int i = 0; i < 10; i++) {
        cout << volts[i] << endl;
    }
    
    return 0;
}

void calc_volts(double volts[], double current[], double resistance[]) {
    int i;
    
    for (i = 0; i < 10; i++) {
        volts[i] = current[i] * resistance[i];
    }
}