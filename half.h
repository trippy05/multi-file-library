#ifndef INC_1__HALF_H
#define INC_1__HALF_H
#include <iostream>
#include <cmath>
using namespace std;
class Calculator {
private:
    double num1 = 0;
    double num2 = 0;
    int number = 0;

public:
    void get();
    int get_number();
    double add();
    double sub();
    double mult();
    double div();
    double expon();

} calc;







#endif //INC_1__HALF_H
