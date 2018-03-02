#include <iostream>
using namespace std;
int main() {
    cout << "Sean Duarte - 2/24/18"
         << endl;  // Name and date to show this is my code
    int height = 0, feet = 0, inches = 0;
    cout << "How many feet and how many inches tall are you?"
         << endl;  // Ask user for input
    cin >> feet >> inches;
    height = feet * 12 + inches;

    cout << "You are " << height << " inches tall."
         << endl;  // Send user output
    return 0;      // End program
}
