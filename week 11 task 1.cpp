//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string employeeName;
    int employeeID;
    float basicSalary;
    float netSalary;

public:
    void setEmployeeDetails()
    {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        netSalary = basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main()
{
    Employee emp;

    emp.setEmployeeDetails();
    emp.calculateSalary();
    emp.displayEmployeeDetails();

    return 0;
}
