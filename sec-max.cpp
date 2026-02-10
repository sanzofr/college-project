// second max number in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 48, 5, 6, 8, 15, 1, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = 0, sec_max = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] > sec_max)
        {
            sec_max = arr[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Second max: " << sec_max << endl;

    return 0;
}
