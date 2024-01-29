#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class ArrayAverage {
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

    double calculateAverage() {
        if (size == 0) {
            cout << "Array is empty. Cannot calculate average." << endl;
            return 0.0;
        }

        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }

        return static_cast<double>(sum) / size;
    }

    void displayAverage() {
        cout << "Average of elements in the array: " << calculateAverage() << endl;
    }
};

int main() {
    ArrayAverage arrayAverage;
    arrayAverage.getInput();
    arrayAverage.displayAverage();

    return 0;
}

