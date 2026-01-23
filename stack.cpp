#include <iostream>
using namespace std;

int arr[5] = {0,0,0,0,0};
int index;

int push(int x) {
    arr[index] = x;
    index++;
}

int pop() {
    arr[index] = 0;
    index--;
}

int main() {
    push(5);
    push(4);
    push(2);
    pop();
    pop();
    push(1);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
