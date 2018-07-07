#include <iostream>
using namespace std;

const int CAP = 100;

int main(){
    int *intArray, *copyIntArray;
    intArray = new int[CAP];
    for (int i = 0; i < 100; i++) {
        intArray[i] = i;
    }
    cout << "intArray:\n";
    for (int i = 0; i < 100; i++) {
       cout << "Index " << i << ", value " << intArray[i] << endl;
    }
    copyIntArray = intArray;
    cout << "copyIntArray:\n";
    for (int i = 0; i < 100; i++) {
       cout << "Index " << i << ", value " << copyIntArray[i] << endl;
    }
    intArray = NULL;
    copyIntArray = NULL;
}
