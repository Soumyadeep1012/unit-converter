#include <iostream>
using namespace std;

void showMenu() {
    cout << "Unit Converter (C++ CLI Version)\n";
    cout << "1. Meters to Feet\n";
    cout << "2. Kilograms to Pounds\n";
    cout << "3. Celsius to Fahrenheit\n";
    cout << "4. Exit\n";
}

int main() {
    int choice;
    double input;

    do {
        showMenu();
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter meters: ";
                cin >> input;
                cout << input << " meters = " << input * 3.28084 << " feet\n\n";
                break;
            case 2:
                cout << "Enter kg: ";
                cin >> input;
                cout << input << " kg = " << input * 2.20462 << " pounds\n\n";
                break;
            case 3:
                cout << "Enter Celsius: ";
                cin >> input;
                cout << input << "°C = " << (input * 9 / 5) + 32 << "°F\n\n";
                break;
            case 4:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Try again.\n\n";
        }
    } while (choice != 4);

    return 0;
}