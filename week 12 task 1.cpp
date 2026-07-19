//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <string>
using namespace std;

class MedicalStaff
{
protected:
    string staffName;
    int staffID;

public:
    MedicalStaff(string name, int id)
    {
        staffName = name;
        staffID = id;
    }

    virtual double calculateSalary() = 0;

    void displayDetails()
    {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

class Doctor : public MedicalStaff
{
private:
    double basicSalary, allowance;

public:
    Doctor(string name, int id, double basic, double allow)
        : MedicalStaff(name, id)
    {
        basicSalary = basic;
        allowance = allow;
    }

    double calculateSalary()
    {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff
{
private:
    double basicSalary, overtimePay;

public:
    Nurse(string name, int id, double basic, double overtime)
        : MedicalStaff(name, id)
    {
        basicSalary = basic;
        overtimePay = overtime;
    }

    double calculateSalary()
    {
        return basicSalary + overtimePay;
    }
};

int main()
{
    MedicalStaff *staff;

    Doctor doctor("John Doe", 101, 80000, 10000);
    Nurse nurse("Mary Jane", 102, 50000, 5000);

    staff = &doctor;
    staff->displayDetails();
    cout << "Salary: " << staff->calculateSalary() << endl;

    cout << endl;

    staff = &nurse;
    staff->displayDetails();
    cout << "Salary: " << staff->calculateSalary() << endl;

    return 0;
}
