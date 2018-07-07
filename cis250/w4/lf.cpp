#include <iostream>

using namespace std;

const int CAPACITY = 1000;

int main(){

    int *dArray;
    dArray = new int[CAPACITY];

    dArray[0] = 3;
    dArray[1] = 7;
    dArray[2] = 2;
    dArray[3] = 9;

    cout << "Array: ";

    for (int i = 0; i < 4; i++) {
        cout << dArray[i] << " ";
    }

    delete [] dArray;
    dArray = NULL;

    return 0;
}

