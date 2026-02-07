#include <iostream>
#include <string>
using namespace std;

struct footballPlayer {
    string name;
    string team;
    string position;
    int age;
    int jerseyNo;
};

int main() {
    footballPlayer p1;

    p1.name = "Ronaldo";
    p1.team = "Al nasr";
    p1.position = "Striker";
    p1.age = 41;
    p1.jerseyNo = 7;

    cout << "Name: " << p1.name << endl;
    cout << "Team: " << p1.team << endl;
    cout << "Position: " << p1.position << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Jersey Number: " << p1.jerseyNo << endl;

    return 0;
}
