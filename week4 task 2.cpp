//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // i. Declares a variable to store account balance and withdrawal amount
    double accountBalance = 0.0;
    double withdrawalAmount = 0.0;

    cout << "--- Savings Withdrawal System ---" << endl;
    cout << "Enter initial account balance: $";
    cin >> accountBalance;

    // Safety Check: Ensure they actually have money to start the loop
    if (accountBalance <= 0) {
        cout << "Error: Initial balance must be greater than 0." << endl;
    } else {
        cout << fixed << setprecision(2);

        // ii. Uses a while loop to allow repeated withdrawals
        while (accountBalance > 0) {
            cout << "\nCurrent Balance: $" << accountBalance << endl;
            cout << "Enter withdrawal amount: $";
            cin >> withdrawalAmount;

            // iv. The loop should stop when withdrawal amount is greater than the balance
            if (withdrawalAmount > accountBalance) {
                cout << "Transaction Declined: Insufficient funds!" << endl;
                break; // Forcefully exit the loop
            }

            // iii. After each withdrawal: Deducts amount and displays remaining balance
            accountBalance -= withdrawalAmount; 
            cout << "Withdrawal successful! Remaining balance: $" << accountBalance << endl;

            // iv. The loop should stop when the balance becomes zero
            if (accountBalance == 0) {
                cout << "Your account balance has reached zero." << endl;
                break; // Forcefully exit the loop
            }
        }
    }

    cout << "\nSession ended. Thank you for using our service." << endl;

    // Keeps the console window open on Windows IDEs if it's auto-closing
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get(); 

    return 0;
}
