//BCS-05-0070/2025 JOSHUA LILA
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter brand: ";
        getline(cin, brand);

        cout << "Enter year of manufacture: ";
        cin >> year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    float engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter number of doors: ";
        cin >> doors;

        cout << "Enter engine capacity: ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << doors << endl;
        cout << "Engine Capacity: " << engineCapacity << " L" << endl;
    }
};

int main() {
    Car c;

    c.inputCar();

    cout << "\nCar Details\n";
    c.displayCar();

    return 0;
}
