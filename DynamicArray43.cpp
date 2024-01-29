#include <iostream>

using namespace std;

class DynamicArray {
public:
    int *arr;
    int size;

    DynamicArray() {
        arr = nullptr;
        size = 0;
    }

    void createArray() {
        cout << "Enter the size of the dynamic array: ";
        cin >> size;

        arr = new int[size];

        cout << "Enter elements of the dynamic array: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void displayArray() {
        cout << "Dynamic array values: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray dynamicArray;
    dynamicArray.createArray();
    dynamicArray.displayArray();

    return 0;
}

