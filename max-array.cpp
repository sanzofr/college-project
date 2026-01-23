#include <iostream>
using namespace std;

int main() {
    int array[10] = {1,2,4,5,6,2,25,6,7,9};

    int max=array[1];
    int index;
    for (int i = 0; i < 10; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
            index= i;
        }
    }

    cout<<max<<"\n"<<index;
    return 0;
}
