#include <iostream>
using namespace std;

int squareInteger(int x) {
    return x * x;
}

double squareDouble(double d) {
    return d * d;
}

float squareFloat(float f) {
    return f * f;
}

int main() {
    int input;
    cout << "Enter int: ";
    cin >> input;
    cout << squareInteger(input) << endl;

    double input2;
    cout << "Enter double: ";
    cin >> input2;
    cout << squareDouble(input2) << endl;

    float input3;
    cout << "Enter float: ";
    cin >> input3;
    cout << squareFloat(input3) << endl;


    return 0; // End program
}
