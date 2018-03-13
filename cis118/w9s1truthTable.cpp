#include <iostream>

using namespace std;
int main() {
    bool A, B, C;
    cout << "Enter variables A B C: ";
    cin >> A >> B >> C;

    cout << "A or B = ";
    if (A || B) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    cout << "(A or B) and C = ";
    if ((A || B) && C) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;  // End program
}
