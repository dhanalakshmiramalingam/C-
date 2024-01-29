#include <iostream>

using namespace std;

class AverageCalculator {
public:
    int num1, num2, num3;

    void getNumbers() {
        cout << "Enter three integers: ";
        cin >> num1 >> num2 >> num3;
    }

    void calculateAverage() {
        double average = static_cast<double>(num1 + num2 + num3) / 3;
        cout << "Average: " << average << endl;
    }
};

int main() {
    AverageCalculator calculator;
    calculator.getNumbers();
    calculator.calculateAverage();

    return 0;
}

