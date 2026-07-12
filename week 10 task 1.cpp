//BCS-05-0070/2025  JOSHUA LILA
#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
    }

    void processPayment(int amount, int fee) {
        int total = amount + fee;
        cout << "Card Payment: " << total << endl;
    }

    void processPayment(int amount, int fee, int discount) {
        int total = amount + fee - discount;
        cout << "Mobile Payment: " << total << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);
    p.processPayment(1000, 50);
    p.processPayment(1000, 50, 100);

    return 0;
}
