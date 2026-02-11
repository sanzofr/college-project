// finding missing elem 1 to n using XOR solution

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,4,5,2,7,6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    int x1 = 0, x2 = 0;

    for(int i=0; i < n-1; i++) {
        x1 = x1 ^ arr[i];
    }

    for(int i=0; i <= n; i++) {
        x2 = x2 ^ i;
    }

    cout << (x1 ^ x2);
    return 0;
}
