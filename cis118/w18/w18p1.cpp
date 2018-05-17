#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;

    ifstream fin;
    fin.open("firstLastAge.txt");
    while (!fin.eof()) {
        getline(fin,line);
        cout << line << endl;
    }

    fin.close();
    return 0; // End program
}
