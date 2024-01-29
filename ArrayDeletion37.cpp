#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class ArrayDeletion {
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

    void deleteElement(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position. Element cannot be deleted." << endl;
            return;
        }

        // Shift elements to the left to fill the gap created by deletion
        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        --size;

        cout << "Element deleted successfully." << endl;
    }

    void displayArray() {
        cout << "Array after deletion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayDeletion arrayDeletion;
    arrayDeletion.getInput();

    int position;
    cout << "Enter the position to delete the element: ";
    cin >> position;

    arrayDeletion.deleteElement(position);
    arrayDeletion.displayArray();

    return 0;
}

