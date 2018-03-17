#include <iostream>
#include <stdlib.h>  //Need for exit(), so program can end early
using namespace std;

bool yNCheck(char check);  // Define function
bool notAnIf(bool check);  // Definitely doesn't count to if limit...

int main() {
    char day, input;
    bool isClean, homeworkDone;
    cout << "What is the day of the week (m, t, w, h, f, s, u)? ";
    cin >> day;
    cout << "Is your room clean? ";
    cin >> input;
    isClean = yNCheck(input);
    cout << "Is your homework done? ";
    cin >> input;
    homeworkDone = yNCheck(input);

    if ((day == 'm') || (day == 't') || (day == 'w')) {
        notAnIf(isClean && homeworkDone);
    } else if ((day == 'h') || (day == 'f') || (day == 's') || (day == 'u')) {
        notAnIf(isClean || homeworkDone);
    }

    return 0;  // End program
}

bool notAnIf(bool check) {
    if (check) {
        cout << "You can go out and play\n";
        return 1;
    } else {
        cout << "You cannot go out and play\n";
        return 0;
    }
};

// bool yNCheck(char check) {
//     if (check == 'y' || check == 'n') {
//         if (check == 'y') {
//             return 1;
//         } else {
//             return 0;
//         }
//     } else {  // Ends program if user does not input y or n
//         cout << "Not y or n. Try again.";
//         exit(0);
//     }
// };

bool yNCheck(char check) {
    if (check == 'y') {
        return 1;
    } else if (check == 'n') {
        return 0;
    } else {  // Ends program if user does not input y or n
        cout << "Not y or n. Try again.";
        exit(0);
    }
};
