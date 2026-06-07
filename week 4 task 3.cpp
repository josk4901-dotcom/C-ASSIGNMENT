//BCS-05-0070/2025  JOSHUA LILA
#include <iostream>
#include <string>

using namespace std;

int main() {
    // i. Stores a predefined username and password
    const string correctUsername = "admin";
    const string correctPassword = "password123";

    string inputUsername;
    string inputPassword;
    bool isAuthenticated = false;

    cout << "--- System Login ---" << endl;

    // ii. Uses a do-while loop to repeatedly prompt the user
    do {
        cout << "\nEnter Username: ";
        cin >> inputUsername;
        cout << "Enter Password: ";
        cin >> inputPassword;

        // iii. & iv. Checks the input and continues until correct credentials are entered
        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            cout << "\nAccess Granted" << endl;
            isAuthenticated = true; // This will cause the loop condition to evaluate to false
        } else {
            cout << "\nIncorrect credentials, try again" << endl;
        }

    } while (!isAuthenticated); 

    return 0;
}
