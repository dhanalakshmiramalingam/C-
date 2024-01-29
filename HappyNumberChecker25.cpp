#include <iostream>
#include <unordered_set>
using namespace std;
class HappyNumberChecker {
public:
    int number;
    void getInput() {
        cout << "Enter a positive integer: ";
        cin >> number;
    }
    bool isHappyNumber() {
        unordered_set<int> seen;
        while (number != 1 && seen.find(number) == seen.end()) {
            seen.insert(number);
            int sum = 0;
            while (number > 0) {
                sum += (number % 10) * (number % 10);
                number /= 10;
            }
            number = sum;
        }
        return (number == 1);
    }
    void printResult() {
        cout << (isHappyNumber() ? "It is a Happy number." : "It is not a Happy number.") << endl;
    }
};
int main() {
    HappyNumberChecker checker;
    checker.getInput();
    checker.printResult();

    return 0;
}

