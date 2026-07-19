#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    string admissionNumber;
    float feeBalance;

public:
    void inputStudentData()
    {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    void makePayment()
    {
        float payment;

        cout << "Enter Payment Amount: ";
        cin >> payment;

        feeBalance -= payment;

        if (feeBalance < 0)
        {
            feeBalance = 0;
        }
    }

    void displayStatus()
    {
        cout << "\nStudent Details" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main()
{
    Student student;

    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}