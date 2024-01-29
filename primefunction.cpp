#include <iostream>
using namespace std;
class MathOperations {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    MathOperations math;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (math.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

