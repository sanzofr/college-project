#include <iostream>
using namespace std;

int balance = 0;
int pointer = 0;
int txns[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int add(int x)
{
    balance += x;
    return balance;
}

int withdraw(int x)
{
    balance -= x;
    return balance;
}

void checkbalance()
{
    cout << "Current Balance: " << balance << "\n";
}

void transactions()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i <<"."<<txns[i] <<"\n";
    }
}

int main()
{
    int cmd;
    int amount = 0;
    cout << "Hey! \n";

    while (true)
    {
        cout << "1. add money \t 2. withdraw money \t 3. Check Balance \t 4. Check Transactions \n";
        cin >> cmd;

        if (cmd == 1)
        {
            cout << "Enter Amount to add: ";
            cin >> amount;
            add(amount);
            txns[pointer] = amount;
            pointer++;
        }
        else if (cmd == 2)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            withdraw(amount);
            txns[pointer] = -amount;
            pointer++;
        }
        else if (cmd == 3)
        {
            checkbalance();
        }
        else if (cmd == 4)
        {
            transactions();
        }
    }

    return 0;
}
