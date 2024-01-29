#include <iostream>

using namespace std;

class StringUtil {
public:
    // Function to count the number of elements in a string
    int countElements(const string& input) {
        return input.length();
    }
};

int main() {
    StringUtil util;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Number of elements in the string: " << util.countElements(input) << endl;

    return 0;
}

