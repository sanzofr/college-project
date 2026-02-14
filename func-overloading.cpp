#include <iostream>
using namespace std;

int multiply(int x) {
    return x*x;
}

int multiply(int x, int y) {
    return x*y;
}

int multiply(int x, int y, int z) {
    return x*y*z;
}

int main() {
    cout << multiply(10) << endl;
    cout << multiply(10, 20) << endl;
    cout << multiply(10, 20, 30) << endl;

    return 0;
}
