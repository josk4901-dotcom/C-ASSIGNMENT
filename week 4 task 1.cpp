#include <iostream>
#include <string>
#include <iomanip> // Used to format decimal output nicely

using namespace std;

int main() {
    // i. Declares variables to store employee name and basic salary
    string employeeName;
    double basicSalary;
    double bonus;
    double totalSalary;

    cout << "--- Employee Bonus System ---" << endl;

    // ii. Uses a for loop to input details for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for Employee " << i << ":" << endl;
        cout << "Enter Name: ";
        cin >> employeeName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        // iii. Calculates bonus using the formula: Bonus = 0.05 * Basic Salary
        bonus = 0.05 * basicSalary;

        // iv. Calculates total salary using: Total Salary = Basic Salary + Bonus
        totalSalary = basicSalary + bonus;

        // v. Displays a report for each employee
        cout << "\n--- Employee Report ---" << endl;
        cout << "Name:         " << employeeName << endl;
        cout << "Basic Salary: $" << fixed << setprecision(2) << basicSalary << endl;
        cout << "Bonus:        $" << bonus << endl;
        cout << "Total Salary: $" << totalSalary << endl;
        cout << "-----------------------" << endl;
    }

    return 0;
}