#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class ArrayInsertion {
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

    void insertElement(int position, int element) {
        if (position < 0 || position > size) {
            cout << "Invalid position. Element cannot be inserted." << endl;
            return;
        }

        // Shift elements to the right to make space for the new element
        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        ++size;

        cout << "Element inserted successfully." << endl;
    }

    void displayArray() {
        cout << "Array after insertion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayInsertion arrayInsertion;
    arrayInsertion.getInput();

    int position, element;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    cout << "Enter the element to insert: ";
    cin >> element;

    arrayInsertion.insertElement(position, element);
    arrayInsertion.displayArray();

    return 0;
}

