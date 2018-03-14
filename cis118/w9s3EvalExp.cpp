#include <iostream>
using namespace std;

bool ifCout(bool check);  // Declare function to check for y or n

int main() {
    cout << "(13>42) || (4<9) is ";
    ifCout((13 > 42) || (4 < 9));

    cout << "(11 > 3) && (7 <= 7) is ";
    ifCout((11 > 3) && (7 <= 7));

    cout << "!false is ";
    ifCout(!false);

    cout << "!(31 != 4) is ";
    ifCout(!(31 != 4));

    cout << "(9 != 7) && !(0) is ";
    ifCout((9 != 7) && !(0));

    cout << "(2) is ";
    ifCout((2));

    cout << "(0) is ";
    ifCout((0));

    cout << "(0) || (1) || (42) is ";
    ifCout((0) || (1) || (42));

    cout << "!(!(0)) is ";
    ifCout(!(!(0)));

    cout << "(1)&&(1)&&(1)&&(1)&&(1)&&(0) is ";
    ifCout((1)&&(1)&&(1)&&(1)&&(1)&&(0));

     return 0;  // End program
}

bool ifCout(bool check) {
    if (check) {
        cout << "True\n";
        return 1;
    } else {
        cout << "False\n";
        return 0;
    }
};
/*
(11 > 3) && (7 <= 7)
!false 
!(31 != 4) 
(9 != 7) && !(0)
(2)
(0)
(0) || (1) || (42)
!(!(0)
(1)&&(1) &&(1)&&(1)&&(1)&&(0)
*/
