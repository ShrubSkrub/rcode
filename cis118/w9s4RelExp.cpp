#include <iostream>
using namespace std;

bool ifCout(bool check);  // Declare function to check for y or n

int main() {
    double age, height;
    cout << "Input age and height in feet: ";
    cin >> age >> height;

    cout << "(age >= 18) && (height > 5)";
    ifCout((age >= 18) && (height > 5));

    cout << "(age < 18) || (height < 6)";
    ifCout((age < 18) || (height < 6));

    cout << "((height > 6) && (height < 7)) && ((age > 18) && (age < 65))";
    ifCout(((height > 6) && (height < 7)) && ((age > 18) && (age < 65)));

    cout << "(age != 0)";
    ifCout((age != 0));

    cout << "(age == 18) || (age == 29) || (age == 42)";
    ifCout((age == 18) || (age == 29) || (age == 42));

     return 0;  // End program
}

bool ifCout(bool check) {
    if (check) {
        cout << " is True\n";
        return 1;
    } else {
        cout << " is False\n";
        return 0;
    }
};
