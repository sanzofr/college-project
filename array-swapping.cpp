// array first and last elem swapping
#include <iostream>
using namespace std;


int main() {
    int array[] = {1,2,3,4,5};
    int last = sizeof(array) / sizeof(array[0]);

    int temp = array[0];
    array[0] = array[last-1];

    array[last-1] = temp;


    for(int i= 0; i < last; i++) {
        cout << array[i] << "\t";
    }
    
    return 0;
}
