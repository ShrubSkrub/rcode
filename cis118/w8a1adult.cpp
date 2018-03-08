#include <iostream>

using namespace std;
int main() {
    string firstName;
    int age;

    cout << "What is your first name? ";
    cin >> firstName;
    cout << "What is your age? ";
    cin >> age;

    if (age >= 18) {
        cout << firstName << ", you are an adult.";
    } else {
        cout << firstName << ", you are not an adult";
    }

    return 0;  // End program
}
