// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {
       int answer;
       // complete this function so the code works 
       return answer;
    }
    Rectangle(int w, int h) {  // parameterized constructor
       // complete this function so the code works
    }
};

void Rectangle::set_values (int x, int y) {
     // complete this function so the code works
}

int main () {  // Use this driver program
  // Use parameterized constructor to set values
  Rectangle rect1(5,6);
  cout << "area: " << rect1.area() << endl;
  // Use set_values function to set values 
  Rectangle rect2;
  rect2.set_values (3,4);
  cout << "area: " << rect2.area() << endl;
  return 0;
}
