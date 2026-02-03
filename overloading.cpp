#include <iostream>
using namespace std;

int volume(int x)
{
    return x * x * x;
}

double volume(int x1, int x2)
{
    return 3.14 * x1 * x1 * x2;
}

int volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << volume(10) << endl;
    cout << volume(5, 2) << endl;
    cout << volume(10, 20, 5) << endl;

    return 0;
}
