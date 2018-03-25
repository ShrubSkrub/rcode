#include <iostream>

using namespace std;
int main() {
    int age = 0;
    cout << "Enter age to see ticket price: ";
    cin >> age;

    switch (age){
        case 0 ... 5:
            cout << "$0.00\n\n";
            break;
        case 6 ... 12:
            cout << "$10.00\n";
            break;
        case 13 ... 26:
            cout << "$18.00\n";
            break;
        default:
            cout << "$15.00\n";
    }

    return 0; // End program
}

// The if statement is easier to understand than the switch statement for more complex operations.
