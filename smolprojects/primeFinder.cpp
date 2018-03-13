#include <iostream>

using namespace std;

void prime(int runs);  // Define function

int main() {
    int temp;
    cout << "Run Program Till What Number: ";
    cin >> temp;  // Ask for # of runs
    prime(temp);  // Call function
    return 0;
}
void prime(int runs) {
    int r = 1;                          // how long while loop will be run
    int i = 2;                          // number to be checked
    int fal = 0;                        // factors
    while (r != runs) {                 // Run loop until r equals runs chosen
        fal = 0;                        // Reset factors
        for (int j = 1; j <= i; j++) {  // Run if j less than i, add j on loop
            if (i / j == 1) {  // Divide i(check) by j(all numbers below i)
                fal += 1;      // Increment fal by 1 | fall = fall + 1
                break;         // Falls to line 29, ends loop?
            } else if (i % j == 0) {  // Check if i divisible by j
                fal += 1;             // Increment fal by 1 | fall = fall + 1
                continue;             // Continues for loop, not really needed
            }
        };
        if (fal == 2) {                           // Print i if fal is 2
            cout << i << " is a Prime Number\n";  // Output prime
        }
        r++;                          // Increment number of runs
        i++;                          // Increment number to be checked
    }
};
