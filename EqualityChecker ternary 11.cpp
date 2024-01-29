#include <iostream>

using namespace std;

class EqualityChecker {
public:
    int num1, num2;

    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void checkEquality() {
        string result = (num1 == num2) ? "The two numbers are equal." : "The two numbers are not equal.";
        cout << result << endl;
    }
};

int main() {
    EqualityChecker checker;
    checker.getNumbers();
    checker.checkEquality();

    return 0;
}

