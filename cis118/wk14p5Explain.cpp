// Programmer Explain the results
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
    int arrayIntegers[50] = {0};  // Declare array and set each value to 0
    int i = 0;                    // Declare variable for loop

    cout << fixed;            //
    cout << setprecision(0);  //
    cout << setw(50);         //
    cout << right;            //

    for (i = 0; i < 50; i++) { //
        cout << " ------------------------------------------- " << endl;  // Print a line of characters
        cout << " 2 ^ " << i << " = " << pow(2.0, i) << endl;       //
        arrayIntegers[i] = pow(2.0, i);                             //
        cout << " 2 ^ " << i << " = " << arrayIntegers[i] << endl;  //
    }
    // system("pause");  // Needed to pause output in Windows
    return 0;
}
