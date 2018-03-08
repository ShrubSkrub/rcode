#include <iostream>

using namespace std;
int main() {
    int grade;

    cout << "Input grade to convert: ";
    cin >> grade;

    if (grade <= 60) {
        cout << "F";
    } else {
        if (grade <= 69) {
            cout << "D";
        } else {
            if (grade <= 79) {
                cout << "C";
            } else {
                if (grade <= 89) {
                    cout << "B";
                } else {
                    if (grade >= 90) {
                        cout << "A";
                    }
                }
            }
        }
    }
    return 0;  // End program
}
