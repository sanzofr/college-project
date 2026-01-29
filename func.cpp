#include <iostream>
using namespace std;

int balance = 0;

int add(int x)
{
    balance += x;
    cout << "Updated balance: " << balance << endl;
}

int remove(int x)
{
    balance -= x;
    cout << "Updated balance: " << balance << endl;
}

int main()
{
    add(20);
    add(90);
    remove(30);
    add(40);
    remove(80);
    remove(10);

    return 0;
}
