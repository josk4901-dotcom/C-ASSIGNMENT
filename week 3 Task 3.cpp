#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    float hoursWorked, ratePerHour;
    float basicPay, tax, netPay;

    // Input
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter rate per hour: ";
    cin >> ratePerHour;

    // Calculate basic pay
    basicPay = hoursWorked * ratePerHour;

    // Calculate tax
    if (basicPay > 50000) {
        tax = 0.20 * basicPay;
    }
    else if (basicPay >= 20000) {
        tax = 0.10 * basicPay;
    }
    else {
        tax = 0;
    }

    // Calculate net pay
    netPay = basicPay - tax;

    // Display results
    cout << "\n--- Employee Pay Summary ---\n";
    cout << "Name:      " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Basic Pay: " << basicPay << endl;
    cout << "Tax:       " << tax << endl;
    cout << "Net Pay:   " << netPay << endl;

    return 0;
}