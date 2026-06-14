//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double amount;

        cout << "Enter payment amount: ";
        cin >> amount;

        feeBalance -= amount;

        if (feeBalance < 0)
            feeBalance = 0;

        cout << "Payment successful.\n";
    }

    void displayStatus() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student s;

    s.inputStudent();
    s.displayStatus();

    s.makePayment();

    cout << "\nUpdated Fee Status:\n";
    s.displayStatus();

    return 0;
}
