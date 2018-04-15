#include <iostream>

using namespace std;
int main() {
    int choice = 0, i = 0;
    double tempIn, tempOut;

    do {
        cout << "Choose: [1] Celcius to Farenheit, [2] Farenheit to Celcius: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Input Celcius temperature: ";
            cin >> tempIn;
            tempOut = (tempIn * 1.8) + 32;
            cout << tempIn << "°C is " << tempOut << "°F" << endl;
        } else if (choice == 2) {
            cout << "Input Farenheit temperature: ";
            cin >> tempIn;
            tempOut = (tempIn - 32) / 1.8;
            cout << tempIn << "°F is " << tempOut << "°C" << endl;
        } else {
            cout << "Not valid option." << endl;
        }
        cout << "\nWould you like to enter another temperature? (1 for yes, 0 for no.)\n";
        cin >> i;
    } while (i == 1);
    return 0;  // End program
}
