// implementing stack with class

#include <iostream>
using namespace std;

class stack {
    private:
        int arr[20] = {0};
        int pointer = 0;

    public:
        void push(int x) {
            if (pointer < 20) {
                arr[pointer] = x;
                pointer++;
            }
            else {
                cout << "stack overflow!" << endl;
            }
        }

        void pop() {
            if (pointer > 0) {
                pointer--;
                arr[pointer] = 0;
            }
            else {
                cout << "Stack underflow!" << endl;
            }
        }

        void showdata() {
            for (int x : arr) {
                cout << x << "\t";
            }
        }
};

int main() {
    stack s1;

    s1.push(10);
    s1.push(20);
    s1.pop();
    s1.push(10);
    s1.push(30);
    s1.push(60);
    s1.push(80);
    s1.pop();
    s1.showdata();

    return 0;
}
