#include <iomanip>
#include <iostream>

using namespace std;
int main() {
    int multiTable[11][11];

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            int num = i * j;
            multiTable[i][j] = num;
        }
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << setw(4) << multiTable[i][j];
        }
        cout << endl;
    }

    return 0;  // End program
}
