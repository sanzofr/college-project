// sum of all elem in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum =0;

    for(int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }

    cout << "Total sum: " << sum;

    return 0;
}
