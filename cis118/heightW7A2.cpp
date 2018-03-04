#include <iostream>
using namespace std;
int main() {
    // Name and date to show this is my code
    cout << "Sean Duarte - 2/24/18" << endl;

    // Declare variables
    int height = 0, feet = 0, inches = 0;
    // Take input
    cout << "How many feet and how many inches tall are you?" << endl;
    cin >> feet >> inches;
    // Preform operation
    height = feet * 12 + inches;
    // Send output
    cout << "You are " << height << " inches tall." << endl;

    // End program
    return 0;
}
