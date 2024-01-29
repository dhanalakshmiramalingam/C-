#include <iostream>

using namespace std;

class Calculator {
public:
    int num1, num2;

    void getNumbers() {
        cout << "Enter first integer: ";
        cin >> num1;

        cout << "Enter second integer: ";
        cin >> num2;
    }

    void add() {
        cout << "Sum: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Difference: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Product: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0) {
            cout << "Quotient: " << static_cast<double>(num1) / num2 << endl;
        } else {
            cout << "Cannot divide by zero." << endl;
        }
    }

    void modulo() {
        if (num2 != 0) {
            cout << "Remainder: " << num1 % num2 << endl;
        } else {
            cout << "Cannot calculate modulo with zero divisor." << endl;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.getNumbers();

    calculator.add();
    calculator.subtract();
    calculator.multiply();
    calculator.divide();
    calculator.modulo();

    return 0;
}

