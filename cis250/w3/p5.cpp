#include <iostream>
using namespace std;
#include "p5Square.h"
#include "p5Cube.h"

int main()
{
    cube alpha;
    cube beta;
    cube gamma;

    alpha.setWidth(1);
    alpha.setLength(1);
    alpha.setHeight(1);
    cout << "Volume: " << alpha.getVolume << endl;

    beta.setWidth(2);
    beta.setLength(2);
    beta.setHeight(2);
    cout << "Volume: " << beta.getVolume << endl;

    gamma.setWidth(1);
    gamma.setLength(2);
    gamma.setHeight(3);
    cout << "Volume: " << gamma.getVolume << endl;

    return 0;
}
