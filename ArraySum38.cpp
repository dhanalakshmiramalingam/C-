#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class ArraySum {
public:
    int arr[MAX_SIZE];
    int size;

    void getInput() {
        cout << "Enter the size of the array: ";
        cin >> size;

        cout << "Enter elements of the array: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }

    void displaySum() {
        cout << "Sum of elements in the array: " << calculateSum() << endl;
    }
};

int main() {
    ArraySum arraySum;
    arraySum.getInput();
    arraySum.displaySum();

    return 0;
}

