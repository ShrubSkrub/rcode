#include <iostream>

using namespace std;
int main() {
    int grade;

    cout << "Input grade to convert: ";
    cin >> grade;

    if (grade <= 60) {
        cout << "F" << endl;
    } else {
        if (grade <= 69) {
            cout << "D" << endl;
        } else {
            if (grade <= 79) {
                cout << "C" << endl;
            } else {
                if (grade <= 89) {
                    cout << "B" << endl;
                } else {
                    if (grade >= 90) {
                        cout << "A" << endl;
                    }
                }
            }
        }
    }
    return 0;  // End program
}
