#include <iostream>
using namespace std;

int main() {
    int subs;
    float total = 0, mark;

    cout << "Enter total subjects (e.g. 7, 8): ";
    cin >> subs;

    for (int i = 0; i < subs; i++) {
        cout << "Enter subject " << i + 1 << " marks: ";
        cin >> mark;
        total += mark;
    }

    float average = total / subs;
    float cgpa = average / 10;

    cout << "Average Marks: " << average << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
