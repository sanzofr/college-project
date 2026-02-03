#include <iostream>
using namespace std;

int swap(int x, int y)  //call by value
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "x: " << x << " y: " << y << endl;
}

int swapref(int &x, int &y)  //call by reference
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << "x: " << x << " y: " << y << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before function call: x = " << x << ", y = " << y << endl;

    swapref(x, y);
    swap(x, y);

    return 0;
}
