#include <stdlib.h>  //Need for exit(), so I can end program early
#include <iostream>
using namespace std;

bool yNCheck(char check);  // Declare function to check for y or n

int main() {
    char input;
    bool hungry, money, transport, want, open, time;

    cout << "Input y for yes and n for no.\n";

    cout << "Are you hungry? ";
    cin >> input;
    hungry = yNCheck(input);

    cout << "Do you have money? ";
    cin >> input;
    money = yNCheck(input);

    cout << "Can you get there? ";
    cin >> input;
    transport = yNCheck(input);

    cout << "Do you want to go? ";
    cin >> input;
    want = yNCheck(input);

    cout << "Is the restaurant open? ";
    cin >> input;
    open = yNCheck(input);

    cout << "Do you have time? ";
    cin >> input;
    time = yNCheck(input);

    if (hungry && money && transport && want && open && time) {
        cout << "You can have lunch at McDonalds.\n";
    } else {
        cout << "You cannot have lunch at McDonalds.\n";
    }

    return 0;  // End program
}

bool yNCheck(char check) {
    if (check == 'y' || check == 'n') {
        if (check == 'y') {
            return 1;
        } else {
            return 0;
        }
    } else {  // Ends program if user does not input y or n
        cout << "Not y or n. Try again.\n";
        exit(0);
    }
};
