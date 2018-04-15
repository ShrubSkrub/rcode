#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
    int i = 0, j = 0, k = 0, m = 1;
    double n = 0;

    do {
        cout << "Enter a number: ";
        cin >> n;

        cout << "The prime numbers from 2 to " << n << " are " << endl;

        for (i = 2; i <= n; i++) {
            k = 0;
            for (j = 1; j <= i; j++)
                if (i % j == 0) k++;
            if (k == 2) cout << ", " << i;
        }

        cout << "\nWould you like to enter another number? (1 for yes, 0 for no.)\n";
        cin >> m;
    } while (m == 1);

    return 0;
}
