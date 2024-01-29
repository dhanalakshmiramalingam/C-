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
        if (num1 == num2) {
            cout << "The numbers are equal." << endl;
        } else {
            cout << "The numbers are not equal." << endl;
        }
    }
};

int main() {
    EqualityChecker checker;
    checker.getNumbers();
    checker.checkEquality();

    return 0;
}

