// reversing array without extra space

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    int i=0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }


    for(int i=0; i<5; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
