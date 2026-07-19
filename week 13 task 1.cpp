//BCS-05-0070/2025  JOSHUA LILA
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("books.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string title;

    cout << "Enter book title: ";
    getline(cin, title);

    file << title << endl;
    file.close();

    cout << "Book title stored successfully." << endl;

    return 0;
}
