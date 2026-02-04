// array rotation by 1 elem to left


#include <iostream>
using namespace std;

int main() {
    int array[5] = {1,2,3,4,5};
    int length = 5;

    int temp = array[0];

    for(int i=0; i<length; i++) {
        array[i] = array[i+1];
    }

    array[length-1] = temp;


    for (int i = 0; i < length; i++)
    {
        cout << array[i] << "\t";
    }


    return 0;
}
