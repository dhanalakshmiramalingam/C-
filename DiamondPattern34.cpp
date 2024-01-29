#include <iostream>

using namespace std;

class DiamondPattern {
public:
    int rows;

    void getInput() {
        cout << "Enter the number of rows: ";
        cin >> rows;
    }

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= rows - i; ++j) {
                cout << " ";
            }

            for (int k = 1; k <= 2 * i - 1; ++k) {
                cout << "*";
            }

            cout << endl;
        }

        for (int i = rows - 1; i >= 1; --i) {
            for (int j = 1; j <= rows - i; ++j) {
                cout << " ";
            }

            for (int k = 1; k <= 2 * i - 1; ++k) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

int main() {
    DiamondPattern diamond;
    diamond.getInput();
    diamond.printPattern();

    return 0;
}

