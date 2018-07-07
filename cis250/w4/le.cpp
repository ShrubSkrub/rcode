#include <iostream>

using namespace std;

int* print(int*);
// print - prints the value a pointer is pointing to
// int* - pointer that is point to an integer

int main(){

    int *p1;
    p1 = new int; // point to an unknown integer

    *p1 = 45;

    print(p1);

    return 0;
}

int* print(int *pointer) {
    cout << "Pointer 1: " << *pointer << endl;
    return pointer;
}
