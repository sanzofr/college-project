// array rotation by n elem to right

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int temp;
    int n = 3;

    for (int j = 0; j <= n;j++)
    {
        temp = arr[0];
        for (int i = 0; i < 5; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[4] = temp;
    }



    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
