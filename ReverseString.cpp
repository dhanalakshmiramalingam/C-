#include <iostream>
#include <string>
#include <algorithm>  // Include this header for the reverse function

using namespace std;

class StringUtil {
public:
    string reverseString(const string& input) {
        string reversed = input;
        reverse(reversed.begin(), reversed.end());
        return reversed;
    }
};

int main() {
    StringUtil util;

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = util.reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

