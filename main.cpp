#include <cmath>
#include <iostream>
#include "half.h"
using namespace std;

int main() {
    int number;
    Calculator calc;
    calc.get();
    number = calc.get_number();
    if (number == 1)
        cout << calc.add() << endl;
    if (number == 2)
        cout << calc.sub() << endl;
    if (number == 3)
        cout << calc.mult() << endl;
    if (number == 4)
        cout << calc.div() << endl;
    if (number == 5)
        cout << calc.expon() << endl;
}