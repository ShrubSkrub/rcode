#include <iostream>
using namespace std;

void yearConvert(int input) {
    int m = input / 1000;
    int c = (input % 1000) / 100;
    int l = (input % 100 ) / 50;
    int x = (input % 50  ) / 10;
    int i = (input % 10  ) / 1;
    int loop = m+c+l+x+i;

    while (0 < loop) {
        for (m; 0 < m; m--) {
            cout << "M";
        }

        for (c; 0 < c; c--) {
            cout << "C";
        }

        for (l; 0 < l; l--) {
            cout << "L";
        }

        for (x; 0 < x; x--) {
            cout << "X";
        }

        for (i; 0 < i; i--) {
            cout << "I";
        }

        loop--;
    }
    cout << endl;
}

int main() {
    int userInput;
    cout << "Enter year: ";
    cin >> userInput;
    yearConvert(userInput);

    return 0; // End program
}
