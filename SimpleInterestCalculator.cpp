#include <iostream>
using namespace std;
class SimpleInterestCalculator {
private:
    double principal;
    int time;
    double rate;
public:
    void getInput() {
        cout << "Enter the principal amount: $";
        cin >> principal;

        cout << "Enter the time (in years): ";
        cin >> time;

        cout << "Enter customer type (S for senior citizen, O for others): ";
        char customerType;
        cin >> customerType;

        rate = (customerType == 'Y' || customerType == 'N') ? 0.12 : 0.10;
    }
    double calculateInterest() {
        return principal * rate * time;
    }
    void displayResult() {
        cout << "Simple Interest: $" << calculateInterest() << endl;
    }
};
int main() {
    SimpleInterestCalculator calculator;
    calculator.getInput();
    calculator.displayResult();
    return 0;
}

