// Programmer Explain the results
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
    int arrayIntegers[50] = {0};  // Declare array and set each value to 0
    int i = 0;                    // Declare variable for loop

    cout << fixed;            // Outputs the value of fixed
    cout << setprecision(0);  // Outputs the value of setprecision
    cout << setw(50);         // Outputs the value of setw
    cout << right;            // Outputs the value of right

    for (i = 0; i < 50; i++) { //
        cout << " ------------------------------------------- " << endl;  // Print a line of characters
        cout << " 2 ^ " << i << " = " << pow(2.0, i) << endl;       // Prints the value of i to the power of 2
        arrayIntegers[i] = pow(2.0, i);                             // Assigns value of i^2 to the array
        cout << " 2 ^ " << i << " = " << arrayIntegers[i] << endl;  // Prints the value of i to the power of 2
    }
    // system("pause");  // Needed to pause output in Windows
    return 0;
}
