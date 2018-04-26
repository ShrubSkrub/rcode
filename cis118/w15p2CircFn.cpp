#include <iostream>
#include <cmath>
using namespace std;

void calcArea(double radius) {
    cout << "Area\n";
    cout << 3.14 * (pow(radius, 2)) << endl;
}

void calcDiameter(double radius) {
    cout << "Diameter\n";
    cout << (radius * 2) << endl;
}

void calcCircumference(double radius) {
    cout << "Circumference\n";
    cout << (2 * 3.14 * radius) << endl;
}

int main() {
    double input = 0;
    cout << "Enter length of radius: ";
    cin >> input;

    calcArea(input);
    calcDiameter(input);
    calcCircumference(input);

    return 0; // End program
}
