#include <iostream>

using namespace std;

class DigitSumCalculator {
public:
    int number;

    void getInput() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }

    int calculateDigitSum() {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

    void printDigitSum() {
        cout << "Sum of digits: " << calculateDigitSum() << endl;
    }
};

int main() {
    DigitSumCalculator calculator;
    calculator.getInput();
    calculator.printDigitSum();

    return 0;
}

