#include <iostream>
using namespace std;

int myFactorial( int integer ) {
    if( integer == 1) {
        return 1;
    } else {
        return (integer * (myFactorial(integer-1)));
    }
}

int main() {
    int i, j, N, input;
    cout << "Input: ";
    cin >> input;

    // for (int i = input; i == 1; i--) {
    //     i = (i * (i - 1));
    // }

    while (i > 0) {
        if (i == 1) {
            cout << 1;
        } else {
            j = i - 1;
        }
        i--;
    }

    // i = myFactorial(input);

    cout << i;

    return 0; // End program
}
