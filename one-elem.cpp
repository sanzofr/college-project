// Finding the Element That Appears Only Once using XOR

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int elem = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        elem = elem ^ arr[i];
    }

    cout << elem;
    return 0;
}
