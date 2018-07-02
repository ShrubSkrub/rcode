// program colors
// -> Convert class into .h header file and .ccp implemenation file.
// Keep int main() funciton same...
#include <iostream>
using namespace std;
#include <string>
/* srand example */
#include <ctime>
#include <stdio.h>      /* NULL */
#include <stdlib.h>     /* srand, rand */
#include "p3Header.h"

int main()
{
    colorPicker P;
    //
    P.printAllColors();
    cout << "Random Color: " << P.randomColor();
    // system("pause");
    return 0;
}
