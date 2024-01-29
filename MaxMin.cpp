#include <iostream>
using namespace std;
class ArrayOperations {
public:
    int findMin(const int arr[], int size) {
        int minElement = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
        }
        return minElement;
    }
    int findMax(const int arr[], int size) {
        int maxElement = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }
};

int main() {
    ArrayOperations arrOps;

    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Minimum element: " << arrOps.findMin(arr, size) << endl;
    cout << "Maximum element: " << arrOps.findMax(arr, size) << endl;

    return 0;
}

