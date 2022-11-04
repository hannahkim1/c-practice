#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    //ask for two int temperatures if equal display temp otherwise do nothing
    char letter1, letter2;
    cout << "Enter two letters" << endl;
    cin >> letter1 >> letter2;
    
    if (letter1 < letter2) {
        cout << letter1 << ", " << letter2 << endl;
    }
    else if (letter2 < letter1) {
        cout << letter2 << ", " << letter1 << endl;
    }


    //WEEKLY SALARY 4
    int hours;
    double salary;

    cout << "Input how many hours you have worked" << endl;
    cin >> hours;

    if (hours <= 40) {
        salary = (12 * hours);
        cout << "You earned " << salary << endl;
    }
    else {
        salary = (480 + (17 * hours));
        cout << "You earned " << salary << endl;
    }
    return 0;
}

// chapter 2 (problem solving using c)
// chapter 3 (assignment, formatting and interactive input)
// chapter 4 (selection structures) if else and switch statements
// chapter 5 (repetition statements)
// M_PI is pi