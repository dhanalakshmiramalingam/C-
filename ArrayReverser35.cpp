#include <iostream>

using namespace std;

class ArrayReverser {
public:
    int size;
    int arr[100];

    void getInput() {
        cout << "Enter the size of the array: ";
        cin >> size;

        cout << "Enter elements of the array: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void reverseArray() {
        cout << "Reversed array: ";
        for (int i = size - 1; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayReverser reverser;
    reverser.getInput();
    reverser.reverseArray();

    return 0;
}

