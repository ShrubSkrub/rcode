#include <iostream>
using namespace std;

void myFunction( int counter) {
    if(counter == 0) {
        return;
    } else {
        cout << counter << endl;
        myFunction(--counter);
        return;
    }
}
int main() {
    int x = 10;
    // myFunction(x);

    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }
}
