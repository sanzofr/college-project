#include <iostream>
using namespace std;

inline void swap(int arr[], int n) {
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
}

int main() {
    int arr[] = {10, 25, 30, 2, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    swap(arr, length);

    for (int i = 0; i < length; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
