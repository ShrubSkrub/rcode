#include <iostream>

using namespace std;
int main() {
    int choice;
    double tempIn, tempOut;

    cout << "Choose [1] Celcius to Farenheit, [2] Farenheit to Celcius: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Input Celcius temperature: ";
        cin >> tempIn;
        tempOut = (tempIn * 1.8) + 32;
        cout << tempOut << "°F" << endl;
    } else if (choice == 2) {
        cout << "Input Farenheit temperature: ";
        cin >> tempIn;
        tempOut = (tempIn - 32) / 1.8;
        cout << tempOut << "°C" << endl;
    } else {
        cout << "Not valid option.";
    }

    return 0;  // End program
}
