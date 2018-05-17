#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line[6];
    int i = 0;

    ifstream fin;
    fin.open("firstLastAge.txt");
    while (!fin.eof()) {
        getline(fin,line[i]);
        i++;
    }
    cout << "Youngest: " << line[1] << endl;
    cout << "Oldest: " << line[2] << endl;

    return 0; // End program
}

// Print name, age of youngest, then oldest
