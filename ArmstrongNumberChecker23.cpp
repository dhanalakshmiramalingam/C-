#include <iostream>
#include <cmath>

using namespace std;

class ArmstrongNumberChecker {
public:
    int number;

    void getInput() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }

    bool isArmstrongNumber() {
        int originalNumber = number;
        int numDigits = 0;
        int sum = 0;

        // Count the number of digits in the number
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++numDigits;
        }

        originalNumber = number;

        // Calculate the sum of nth powers of digits
        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            sum += pow(digit, numDigits);
            originalNumber /= 10;
        }

        return (sum == number);
    }

    void printResult() {
        cout << (isArmstrongNumber() ? "It is an Armstrong number." : "It is not an Armstrong number.") << endl;
    }
};

int main() {
    ArmstrongNumberChecker checker;
    checker.getInput();
    checker.printResult();

    return 0;
}

