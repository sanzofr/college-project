#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = n - 1;
    for (int i = 0; i < j; i++) {
        if (arr[i] == 0) {
            while (arr[j] == 0 && i < j) {
                j--;
            }
            swap(arr[i], arr[j]);
            j--;
        }
    }

    for (int x = 0; x < n; x++) {
        cout << arr[x] << "\t";
    }

    return 0;
}
