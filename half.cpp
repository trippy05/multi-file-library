#include <iostream>
#include "half.h"
using namespace std;

    void Calculator::get() {
        cout << "Enter num1:  ";
        cin >> num1;
        cout << "Enter num2:  ";
        cin >> num2;
    }
    int Calculator:: get_number() {
        cout << "Select an operation (1 - addition, 2 subtraction, 3 - multiplication, 4 - division, 5 - exponentiation): ";
        cin >> number;
        return number;
    }
    double Calculator::add() { return num1 + num2; }
    double Calculator::sub() { return num1 - num2; }
    double Calculator::mult() { return num1 * num2; }
    double Calculator::div() { return num1 / num2; }
    double Calculator::expon() { return pow(num1, num2); }


