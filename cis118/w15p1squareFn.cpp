#include <iostream>
using namespace std;

void calcArea(double radius) {
    cout << "Area: " << (radius * radius) << endl;
}

void calcDiameter(double radius) {
    cout << "Diameter: " << (radius / 2) << endl;
}

void calcCircumference(double radius) {
    cout << "Circumference/Perimeter: " << (radius * 4) << endl;
}

int main() {
    double input = 0;
    cout << "Enter length of side: ";
    cin >> input;

    calcArea(input);
    calcDiameter(input);
    calcCircumference(input);

    return 0; // End program
}
