#include <iostream>

using namespace std;

class FibonacciSeriesGenerator {
public:
    int terms;

    void getInput() {
        cout << "Enter the number of terms in the Fibonacci series: ";
        cin >> terms;
    }

    void generateFibonacciSeries() {
        int first = 0, second = 1, next;

        cout << "Fibonacci series for " << terms << " terms: ";
        for (int i = 0; i < terms; ++i) {
            cout << first << " ";
            next = first + second;
            first = second;
            second = next;
        }
        cout << endl;
    }
};

int main() {
    FibonacciSeriesGenerator generator;
    generator.getInput();
    generator.generateFibonacciSeries();

    return 0;
}

