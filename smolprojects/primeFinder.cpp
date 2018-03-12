#include <iostream>

using namespace std;
int main() {
    int i = 2;
    while (true) {
        int f = 0;
        for (int j = 1; j != i; j++) {
            if (i / j == 1) {
                if (f == 1) {
                    break;
                } else {
                    f = 0;
                }

                // cout << "good" << endl;
                break;
            } else if (i / j == 0) {
                f = 1;
                j = i;
                continue;
                // cout << "sds" << endl;
            }
        }
        cout << "f = " << f << endl;
        if (f == 0) {
            cout << i << " is a prime number" << endl;
        }
        i++;
    }

    return 0;  // End program
}
