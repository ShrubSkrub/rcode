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
    int i = 1, j = 1, input;
    cout << "Input: ";
    cin >> input;

    while (i <= input) {
        j *= i;
        i++;
    }

    // i = myFactorial(input);

    cout << j << endl;

    return 0; // End program
}
