#include <iostream>

using namespace std;

class BuzzNumberChecker {
public:
    int number;

    void getInput() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }

    bool isBuzzNumber() {
        return (number % 7 == 0 || number % 10 == 7);
    }

    void printResult() {
        cout << (isBuzzNumber() ? "It is a Buzz number." : "It is not a Buzz number.") << endl;
    }
};

int main() {
    BuzzNumberChecker checker;
    checker.getInput();
    checker.printResult();

    return 0;
}

