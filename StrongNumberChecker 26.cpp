#include <iostream>
using namespace std;
class StrongNumberChecker {
public:
    int number;
    void getInput() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
    bool isStrongNumber() {
        int originalNumber = number;
        int sum = 0;

        while (originalNumber != 0) {
            sum += factorial(originalNumber % 10);
            originalNumber /= 10;
        }

        return (sum == number);
    }
    void printResult() {
        cout << (isStrongNumber() ? "It is a Strong number." : "It is not a Strong number.") << endl;
    }
};
int main() {
    StrongNumberChecker checker;
    checker.getInput();
    checker.printResult();

    return 0;
}

