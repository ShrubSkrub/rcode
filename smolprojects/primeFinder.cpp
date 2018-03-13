#include <iostream>

using namespace std;

void prime(int runs);

int main() {
    int temp;
    cout << "Run Program Till What Number: ";
    cin >> temp;
    prime(temp);
    return 0;
}
void prime(int runs) {
    int r = 1;
    int i = 2;
    int fal = 0;  // base
    while (r != runs) {
        fal = 0;
        for (int j = 1; j <= i; j++) {
            if (i / j == 1) {
                fal += 1;
                break;
            } else if (i % j == 0) {
                fal += 1;
                continue;
            }
        };
        if (fal == 2) {
            cout << i << " is a Prime Number\n";
        }
        r++;
        i++;
    }
};
