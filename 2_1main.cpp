#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int* ptr = &number;
    *ptr = *ptr + 10;

    cout << "Value after modification using pointer: " << number << endl;

    return 0;
}
