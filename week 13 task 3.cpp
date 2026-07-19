//BCS-05-0070/2025   JOSHUA LILA
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sales.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    double amount, total = 0;

    while (file >> amount) {
        total += amount;
    }

    cout << "Total Sales: " << total << endl;

    file.close();

    return 0;
}
