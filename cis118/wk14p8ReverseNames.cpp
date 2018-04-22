#include <iostream>

using namespace std;
int main() {
    string ForwardNames[10] = {"Fred", "Tuyet", "Annie", "Moe", "Ria",
                               "Luke", "Jim",   "May",   "Rex", "Omar"};
    string BackwardNames[10];

    int j = 10;
    for (int i = 0; i < 10; i++) {
        j--;
        BackwardNames[i] = ForwardNames[j];
    }

    for (int i = 0; i < 10; i++) {
        cout << ForwardNames[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << BackwardNames[i] << ' ';
    }

    return 0;  // End program
}
