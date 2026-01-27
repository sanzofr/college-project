#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char find;

    cout << "Enter your name: " << endl;
    cin >> name;
    int length = name.length();

    cout << "Enter letter to find: " << endl;
    cin >> find;

    for (int i = 0; i < length; i++)
    {
        if (name[i] == find)
        {
            cout << "Letter " << find << " is at " << ++i << "th place" << endl;
        }
    }

    return 0;
}
