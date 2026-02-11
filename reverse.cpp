#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5};
    int i =0;
    int n = sizeof(arr)  / sizeof(arr[0]) - 1;

    while (i < n)
    {
        arr[i] = (arr[i] + arr[n]) - (arr[n] = arr[i]);
        i++;
        n--;
    }

    for(int x=0; x < 5; x ++) {
        cout << arr[x] << "\t";
    }

    return 0;
}
