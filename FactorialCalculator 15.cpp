#include <iostream>

using namespace std;

class FactorialCalculator {
public:
    int number;

    void getInput() {
        cout << "Enter a non-negative integer: ";
        cin >> number;
    }

    void calculateFactorial() {
        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {
    FactorialCalculator calculator;
    calculator.getInput();
    calculator.calculateFactorial();

    return 0;
}

