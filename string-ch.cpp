#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name" << endl;
    cin >> name;

    char first = name[0];
    cout << "First letter is: " << first << endl;

    return 0;
}
