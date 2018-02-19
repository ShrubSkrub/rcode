#include <iostream>
using namespace std;

int main()
{
    double ctemp, ftemp;
    cout << "Input a Celsius temp and press Enter: ";
        cin >> ctemp;
        ftemp = (ctemp * 1.8) + 32;
    cout << "Farenheit temp is: " << ftemp;
    return 0;
}
