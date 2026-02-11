// finding missing elem 1 to n using gauss algoritm

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,4,5,2,7,6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    int expected = n * (n+1) / 2;
    int acctual = 0;

    for(int i=0; i < n-1; i++) {
        acctual += arr[i];
    }

    cout << expected - acctual;

    return 0;
}
