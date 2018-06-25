#include <iostream>
using namespace std;

class color {
public:
    string colors[7] = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

    void print() {
        for (int i = 0; i < 7; i++) {
            cout << colors[i] << " ";
        }
    }

    void pick() {
        srand((unsigned)time(0));
        int random = (rand()%7)+1;
        cout << endl << colors[random];
    }
};

int main () {
    color test;
    test.print();
    test.pick();

    return 0;
}
