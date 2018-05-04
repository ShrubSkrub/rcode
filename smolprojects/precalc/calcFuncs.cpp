#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

struct vMagDir {
    double mag;
    double dir;
};
struct vCompForm {
    double x;
    double y;
};

double sind(double angle)
{
    return sin (angle*PI/180);
}
double cosd(double angle)
{
    return cos (angle*PI/180);
}
double tand(double angle)
{
    return tan (angle*PI/180);
}

vMagDir componentToMagnitude(double vX, double vY) {
    vCompForm tempComp;
    vMagDir tempMagDir;
    tempMagDir.mag = sqrt((vX * vX) + (vY * vY));
    tempMagDir.dir = tand(vX / vY);

    return tempMagDir;
}

vCompForm magnitudeToComponent(double vM, double vD) {
    double opposite, adjacent;
    cout << "vM: " << vM << ", vD: " << vD << endl;
    opposite = (sind(vD) * vM);
    adjacent = (cosd(vD) * vM);

    struct vCompForm result;
    result.x = adjacent;
    result.y = opposite;
    return result;
}

// AM = vector A Magnitude, AD = vector A Direction
vMagDir vectorAddMD(double AM, double AD, double BM, double BD) {
    vMagDir vectorA;
    vMagDir vectorB;
    vMagDir vectorR;
    vCompForm compVectorA;
    vCompForm compVectorB;
    vCompForm compVectorR;

    compVectorA = magnitudeToComponent(vectorA.mag, vectorA.dir);
    compVectorB = magnitudeToComponent(vectorB.mag, vectorB.dir);

    compVectorR.x = (compVectorA.x + compVectorB.x);
    compVectorR.y = (compVectorA.y + compVectorB.y);

    vectorR = componentToMagnitude(compVectorR.x, compVectorR.y);
    return vectorR;

}

int main() {
    // Testing
    double input1, input2;
    cout << "Input 1 mag: ";
    cin >> input1;
    cout << "Input 2 dir: ";
    cin >> input2;

    vMagDir vectorA;
    vectorA.mag = input1;
    vectorA.dir = input2;
    vCompForm vectorB;

    // vectorB = testFunc(vectorA.mag, vectorA.dir);
    vectorB = magnitudeToComponent(vectorA.mag, vectorA.dir);

    cout << "Output 1: " << vectorB.x << endl;
    cout << "Output 2: " << vectorB.y << endl;

    return 0; // End program
}
