#include <iostream>
using namespace std;
int main() {
    double a = 18, b = 6, c = 3;

    cout << "18 + 6 / 3 = " << a + b / c << endl;
    cout << "Follows PEMDAS, does division first, then adds." << endl << endl;

    cout << "(18 + 6) / 3 = " << (a + b) / c << endl;
    cout << "Follows PEMDAS, does parenthesis addition, then divides." << endl
         << endl;

    cout << "18 + (6 / 3) = " << a + (b / c) << endl;
    cout << "Follows PEMDAS, does parenthesis division, then adds." << endl;

    return 0;  // End program
}
