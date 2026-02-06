// array sorting using bubble sort

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 6, 9, 50};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i < length; i++) {
        for(int j=0; j < length; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
