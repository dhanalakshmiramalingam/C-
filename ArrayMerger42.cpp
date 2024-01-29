#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class ArrayMerger {
public:
    int arr1[MAX_SIZE];
    int size1;
    int arr2[MAX_SIZE];
    int size2;
    int merged[MAX_SIZE * 2];

    void getInput() {
        cout << "Enter the size of the first array: ";
        cin >> size1;

        cout << "Enter elements of the first array: ";
        for (int i = 0; i < size1; ++i) {
            cin >> arr1[i];
            merged[i] = arr1[i];
        }

        cout << "Enter the size of the second array: ";
        cin >> size2;

        cout << "Enter elements of the second array: ";
        for (int i = 0; i < size2; ++i) {
            cin >> arr2[i];
            merged[size1 + i] = arr2[i];
        }
    }

    void displayMergedArray() {
        cout << "Merged array: ";
        for (int i = 0; i < size1 + size2; ++i) {
            cout << merged[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayMerger merger;
    merger.getInput();
    merger.displayMergedArray();

    return 0;
}

