#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int times;
    int i = 0;
    string input;

    cout << "How many names to input?\n";
    cin >> times;

    ofstream fout;
    fout.open("savedNames.txt");
    while (i < times) {
        cout << "Input name: ";
        cin >> input;

        fout << input << endl;
        i++;
    }
    fout.close();

    return 0; // End program
}
