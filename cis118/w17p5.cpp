#include <iostream>
using namespace std;

int addUp(int in) {
    cout << in << endl;
    if (in == 10) {
        return in;
    } else {
        addUp(in + 1);
    }
}

int main() {
    int i = 1;
    addUp(i);

    return 0;  // End program
}
