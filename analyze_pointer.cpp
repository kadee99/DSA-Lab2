#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;
}

int main() {
    // Stack allocation
    int iValue = 42;
    cout << "Stack integer:" << endl;
    analyze_pointer(&iValue);

    // Heap allocation
    int *hValue = new int;
    *hValue = 100;
    cout << "\nHeap integer:" << endl;
    analyze_pointer(hValue);

    delete hValue;
    return 0;
}