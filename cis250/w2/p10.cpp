#include <iostream>
using namespace std;

class circle {
    int radius;
    public:
        circle () {
            radius = 0;
        }
        circle (int rad) {
            radius = rad;
        }
        int calcDiameter() {
            int diameter = radius * 2;
            return diameter;
        }
        double calcArea() {
            double area = (3.14 * (radius * radius));
            return area;
        }
        double calcCircumference() {
            double circum = (3.14 * 2 * radius);
            return circum;
        }
};

int main() {
    int input;
    cout << "Input radius: ";
    cin >> input;
    circle test(input);
    cout << test.calcDiameter << endl;
    cout << test.calcArea << endl;
    cout << test.calcCircumference << endl;
    return 0;
}
