#include <iostream>
using namespace std;
class Calculator {
public:
    int calculateSum(int a = 0, int b = 0, int c = 0, int d = 0) {
        return a + b + c + d;
    }
    void getUserInput() {
        cout << "Enter four values: ";
        cin >> value1 >> value2 >> value3 >> value4;
    }
    void displaySum() {
        int result = calculateSum(value1, value2, value3, value4);
        cout << "Sum: " << result << endl;
    }

private:
    int value1, value2, value3, value4;
};

int main() {
    Calculator calculator;
    calculator.getUserInput();
    calculator.displaySum();

    return 0;
}

