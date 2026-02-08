// finding missing number in a sequence in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            cout << "Missing elem is at " << i + 1 + 1 << " number" << endl;
            break;
        };
    };

    return 0;
}
