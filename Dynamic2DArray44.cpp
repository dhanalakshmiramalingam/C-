#include <iostream>

using namespace std;

class Dynamic2DArray {
public:
    int **arr;
    int rows;
    int cols;

    Dynamic2DArray() {
        arr = nullptr;
        rows = 0;
        cols = 0;
    }

    void createArray() {
        cout << "Enter the number of rows for the 2D array: ";
        cin >> rows;

        cout << "Enter the number of columns for the 2D array: ";
        cin >> cols;

        arr = new int *[rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new int[cols];
        }

        cout << "Enter elements of the 2D array: ";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> arr[i][j];
            }
        }
    }

    void displayArray() {
        cout << "2D array values: " << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~Dynamic2DArray() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }
};

int main() {
    Dynamic2DArray dynamic2DArray;
    dynamic2DArray.createArray();
    dynamic2DArray.displayArray();

    return 0;
}

