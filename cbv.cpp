// call by value program
#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "a = " << x << " b = " << y << endl;
}
int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    swap(a, b);

    return 0;
}
