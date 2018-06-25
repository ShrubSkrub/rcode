#include <iostream>
using namespace std;

class box {
    int width, height, depth;
    public:
        box () {
            width = 0;
            height = 0;
            depth = 0;
        }
        box (int w, int h, int d) {
            width = w;
            height = h;
            depth = d;
        }
        int getWidth() {
            return width;
        }
        int getHeight() {
            return height;
        }
        int getDepth() {
            return depth;
        }
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
        void setDepth(int d) {
            depth = d;
        }
        int calcArea() {
            return (width * height);
        }
        int calcVolume() {
            return (width * height * depth);
        }
};

int main() {
    // Box 1 - Test Parameterized constructor, area of sides and volume functions
    box B1(1,2,3);  // HINT MAKE a Parameterized constructor...
    cout << "Width = " << B1.getWidth << endl;
    cout << "Area = " << B1.calcArea() << endl;
    cout << "Volume = " << B1.calcVolume() << endl;
    // Box 2 - Test set functions, Volume, getHeight and area functions
    box B2;    // HINT MAKE A Default constructor or set functions...
    B2.setWidth(2);
    B2.setHeight(3);
    B2.setDepth(4);
    cout << "Height = " << B2.getHeight << endl;
    cout << "Area = " << B2.calcArea() << endl;
    cout << "Volume = " << B2.calcVolume() << endl;
    // Box 3 - Test zero value error for calc Area and Volume of sides functions
    box B3;
    B3.setWidth(3);
    B3.setHeight(4);
    cout << "Depth = " << B3.getDepth << endl;
    cout << "Area = " << B3.calcArea() << endl;
    cout << "Volume = " << B3.calcVolume() << endl;
    return 0;
}
