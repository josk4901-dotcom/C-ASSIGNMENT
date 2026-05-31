#include <iostream>
#include <iomanip>
using namespace std;

// Function to get employee details
void getEmployeeDetails(string &name, double &basicSalary, int &overtimeHours)
{
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Overtime Hours: ";
    cin >> overtimeHours;
}

// Function to calculate overtime pay
double calculateOvertimePay(int overtimeHours, double ratePerHour)
{
    return overtimeHours * ratePerHour;
}

// Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay)
{
    return basicSalary + overtimePay;
}

// Function to display payslip
void displayPayslip(string name, double basicSalary,
                    int overtimeHours, double overtimePay,
                    double netSalary)
{
    cout << "\n===== PAYSLIP =====\n";
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay  : " << overtimePay << endl;
    cout << "Net Salary    : " << netSalary << endl;
}

int main()
{
    string name;
    double basicSalary, overtimePay, netSalary;
    int overtimeHours;
    double ratePerHour = 500; // Example rate

    getEmployeeDetails(name, basicSalary, overtimeHours);

    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(name, basicSalary, overtimeHours,
                   overtimePay, netSalary);

    return 0;
}