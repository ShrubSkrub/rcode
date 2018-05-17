#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int scores[10];
    int input, i = 0, min = 100, max = 0;
    float total = 0.0, avg;

    ofstream fout;
    fout.open("savedTestScores.txt");
    while (i < 10) {
        cout << "Input score " << i + 1 << " (0 - 100): ";
        cin >> input;
        fout << input << endl;
        scores[i] = input;
        i++;
    }
    fout.close();

    // Find min
    for (int j = 0; j < 10; j++) {
        if (scores[j] < min) {
            min = scores[j];
        }
    }

    // Find max
    for (int k = 0; k < 10; k++) {
        if (scores[k] > max) {
            max = scores[k];
        }
    }

    // Find average
    for (int l = 0; l < 10; l++) {
        total += scores[l];
    }
    avg = total / 10;

    cout << "Minimum score: " << min << endl;
    cout << "Maximum score: " << max << endl;
    cout << "Average score: " << avg << endl;


    return 0; // End program
}
