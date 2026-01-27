#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int length;

    cout << "Enter a string: " << endl;
    cin >> name;

    length = name.length();
    cout << "Length of string is: " << length << endl;

    return 0;
}
