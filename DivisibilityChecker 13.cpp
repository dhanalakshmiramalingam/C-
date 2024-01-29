#include <iostream>

using namespace std;

class DivisibilityChecker {
public:
    int number;

    void getInput() {
        cout << "Enter an integer: ";
        cin >> number;
    }

    void checkDivisibilityBy3() {
        string result = (number % 3 == 0) ? "The number is divisible by 3." : "The number is not divisible by 3.";
        cout << result << endl;
    }
};

int main() {
    DivisibilityChecker checker;
    checker.getInput();
    checker.checkDivisibilityBy3();

    return 0;
}

