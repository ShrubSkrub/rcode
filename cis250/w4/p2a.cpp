#include <iostream>
using namespace std;

int main(){
    int intVar = 42;
    int *ptrInt;
    ptrInt = &intVar;
    cout << "ptrInt: " << *ptrInt << endl;
    *ptrInt = 23;
    cout << "ptrInt: " << *ptrInt << endl;

    int *ptrInt2;
    ptrInt2 = new int;
    *ptrInt2 = 42;
    cout << "ptrInt2: " << *ptrInt2 << endl;
}
