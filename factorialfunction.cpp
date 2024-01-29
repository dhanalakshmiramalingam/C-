#include <iostream>
using namespace std;
class MathOperations {
public:
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
};

int main() {
    MathOperations math;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << math.factorial(num) << endl;

    return 0;
}

