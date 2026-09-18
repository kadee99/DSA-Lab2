#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int len;
    cout << "Enter length of string: ";
    cin >> len;
    cin.ignore();

    char *str = new char[len + 1];
    cout << "Enter a string of " << len << " characters: ";
    cin.getline(str, len + 1);

    // Reverse using two pointers
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    // Free dynamically allocated memory
    delete [] str;
    return 0;
}