#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    double* arr = new double[size];
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(arr + i);
    }

    double average = sum / size;
    cout << "Average value: " << average << endl;

    delete[] arr;
    return 0;
}
