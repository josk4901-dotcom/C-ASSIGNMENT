//BCS-05-0070/2025   JOSHUA LILA
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int regNo;
    float totalMarks;
};

int main() {
    Student s;

    ifstream file("results.dat", ios::binary);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (file.read((char*)&s, sizeof(s))) {
        cout << "Name: " << s.name << endl;
        cout << "Registration Number: " << s.regNo << endl;
        cout << "Total Marks: " << s.totalMarks << endl;
        cout << "------------------------" << endl;
    }

    file.close();

    return 0;
}
