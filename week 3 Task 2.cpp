//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
using namespace std;

// Function to get customer details
void getCustomerDetails(string &name, int &units)
{
    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Units Consumed: ";
    cin >> units;
}

// Function to calculate bill
double calculateBill(int units, double ratePerUnit)
{
    return units * ratePerUnit;
}

// Function to apply discount
double applyDiscount(double bill, int units)
{
    if (units > 100)
    {
        return bill * 0.10; // 10% discount
    }
    return 0;
}

// Function to display bill
void displayBill(string name, int units,
                 double bill, double discount,
                 double finalAmount)
{
    cout << "\n===== WATER BILL =====\n";
    cout << "Customer Name      : " << name << endl;
    cout << "Units Consumed     : " << units << endl;
    cout << "Bill Before Discount: " << bill << endl;
    cout << "Discount           : " << discount << endl;
    cout << "Final Amount       : " << finalAmount << endl;
}

int main()
{
    string name;
    int units;
    double bill, discount, finalAmount;
    double ratePerUnit = 50; // Example rate

    getCustomerDetails(name, units);

    bill = calculateBill(units, ratePerUnit);

    discount = applyDiscount(bill, units);

    finalAmount = bill - discount;

    displayBill(name, units, bill, discount, finalAmount);

    return 0;
} 
