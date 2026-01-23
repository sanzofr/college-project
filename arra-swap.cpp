#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,5, 2, 3, 4};

    int i = 2;
    int j = i+2;

    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];

    for (int k = 0; k < 5; k++) {
        cout << arr[k] << "\n";
    }

    return 0;
}
