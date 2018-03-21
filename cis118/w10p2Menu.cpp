#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    int choice;
    cout << "1. Single player\n";
    cout << "2. Two player - vs computer\n";
    cout << "3. Two player - vs local player\n";
    cout << "4. Multiplayer - Internet connection - Real players\n";
    cout << "5. Exit\n";
    cout << "Your choice? ";
    cin >> choice;

    switch(choice){
        case 1:
            cout  << "Chose Single player";
            break;
        case 2:
            cout  << "Chose Two player - vs computer";
            break;
        case 3:
            cout  << "Chose Two player - vs local player";
            break;
        case 4:
            cout  << "Chose Multiplayer - Internet";
            break;
        case 5:
            cout  << "Chose to exit";
            exit(0);
            break;
        default:
            cout << "Not a valid option";
    }

    return 0; // End program
}
