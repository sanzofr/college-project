#include <iostream>
using namespace std;

class crypto {
    public:
        inline double fees(double amount) {
            return amount * 0.02;
        }
};

int main() {
    crypto wallet1;
    double amount;

    cout << "Enter amount ($): ";
    cin >> amount;

    double fee = wallet1.fees(amount);
    cout << "Estimated fees: $" << fee;

    return 0;
}
