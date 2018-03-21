#include <stdlib.h>
#include <iostream>

using namespace std;
int main() {
    int input;
    cout << "Input a number from 0 - 10: ";
    cin >> input;
    if (!(input <= 10 && input >= 0)) {
        cout << "Not a valid value.";
        exit(0);
    }

    cout << "If statement\n";
    if (input == 0) {
        cout << "ZERO\n";
    } else if (input == 1) {
        cout << "ONE\n";
    } else if (input == 2) {
        cout << "TWO\n";
    } else if (input == 3) {
        cout << "THREE\n";
    } else if (input == 4) {
        cout << "FOUR\n";
    } else if (input == 5) {
        cout << "FIVE\n";
    } else if (input == 6) {
        cout << "SIX\n";
    } else if (input == 7) {
        cout << "SEVEN\n";
    } else if (input == 8) {
        cout << "EIGHT\n";
    } else if (input == 9) {
        cout << "NINE\n";
    } else if (input == 10) {
        cout << "TEN\n";
    }

    cout << "\nSwitch statement\n";
    switch (input) {
        case 0:
        cout << "ZERO\n";
        break;
        case 1:
        cout << "ONE\n";
        break;
        case 2:
        cout << "TWO\n";
        break;
        case 3:
        cout << "THREE\n";
        break;
        case 4:
        cout << "FOUR\n";
        break;
        case 5:
        cout << "FIVE\n";
        break;
        case 6:
        cout << "SIX\n";
        break;
        case 7:
        cout << "SEVEN\n";
        break;
        case 8:
        cout << "EIGHT\n";
        break;
        case 9:
        cout << "NINE\n";
        break;
        case 10:
        cout << "TEN\n";
        break;
    }

    return 0;  // End program
}
