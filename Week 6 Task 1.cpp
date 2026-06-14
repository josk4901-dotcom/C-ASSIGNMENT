#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copies;
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "No copies available.\n";
        }
    }

    void displayDetails() {
        cout << "\nBook Details\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main() {
    Book b;

    b.inputDetails();
    b.displayDetails();

    b.borrowBook();

    cout << "\nUpdated Book Information:\n";
    b.displayDetails();

    return 0;
}