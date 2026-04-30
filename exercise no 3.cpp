#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    cout << "Largest element: " << largest << endl;

    delete[] arr;
    return 0;
}
