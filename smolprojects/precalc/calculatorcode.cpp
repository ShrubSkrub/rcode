#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
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
double asind(double angle)
{
    return asin (angle) * 180.0 / PI;
}
double cosd(double angle)
{
    return cos (angle*PI/180);
}
double acosd(double angle)
{
    return acos (angle) * 180.0 / PI;
}
double tand(double angle)
{
    // return tan (angle*PI/180);
    // return tan (angle) * 180 / PI;
    return tan ( angle * PI / 180.0 );
}

double atand(double angle)
{
    return atan (angle) * 180.0 / PI;
}

vMagDir componentToMagnitude(double vX, double vY) {
    cout << "Component to Magnitude:\n";
    // // vCompForm tempComp;
    // vMagDir tempMagDir;
    // tempMagDir.mag = sqrt((vX * vX) + (vY * vY));
    // tempMagDir.dir = tand(vY / vX);
    // cout << "Magnitude: " << tempMagDir.mag << endl;
    // cout << "Direction: " << tempMagDir.dir << endl;
    // return tempMagDir;

    double tempVx, tempVy, tempMag, tempDir;
    vMagDir tempMagDir;
    tempVx = vX;
    tempVy = vY;

    tempMag = sqrt((tempVx * tempVx) + (tempVy * tempVy));
    tempDir = atand(tempVy / tempVx);
    cout << "Magnitude: " << tempMag << endl;
    cout << "Direction: " << tempDir << endl;
    tempMagDir.mag = tempMag;
    tempMagDir.dir = tempDir;
    return tempMagDir;

}

vCompForm magnitudeToComponent(double vM, double vD) {
    cout << "Magnitude to Component:\n";
    double opposite, adjacent;
    // cout << "vM: " << vM << ", vD: " << vD << endl;
    opposite = (sind(vD) * vM);
    adjacent = (cosd(vD) * vM);

    cout << "Opposite: " << opposite << endl;
    cout << "Adjacent: " << adjacent << endl;

    struct vCompForm result;
    result.y = opposite;
    result.x = adjacent;
    return result;
}

// AM = vector A Magnitude, AD = vector A Direction
vMagDir vectorAddMD(double AM, double AD, double BM, double BD) {
    cout << "Vector Add MD:\n";
    vMagDir vectorA;
    vMagDir vectorB;
    vMagDir vectorR;
    vCompForm compVectorA;
    vCompForm compVectorB;
    vCompForm compVectorR;
    double tempX, tempY;

    compVectorA = magnitudeToComponent(AM, AD);
    compVectorB = magnitudeToComponent(BM, BD);

    cout << "A X: " << compVectorA.x << ", A Y: " << compVectorA.y << endl;
    cout << "B X: " << compVectorB.x << ", B Y: " << compVectorB.y << endl;

    // compVectorR.x = (compVectorA.x + compVectorB.x);
    // compVectorR.y = (compVectorA.y + compVectorB.y);

    tempX = (compVectorA.x + compVectorB.x);
    tempY = (compVectorA.y + compVectorB.y);

    cout << "R X: " << tempX << ", R Y: " << tempY << endl;

    vectorR = componentToMagnitude(tempX, tempY);

    cout << "-----------------------\n";
    cout << "Resultant Magnitude: " << vectorR.mag << endl;
    cout << "Resultant Direction: " << vectorR.dir << endl;

    return vectorR;

}

double lawOfSin(){
    string angleA, lenA, angleB, lenB;
    cout << "Enter 'x' for the missing angle/length\n";
    cout << "Enter Side A : ";
    cin >> lenA;
    cout << "Enter Angle A: ";
    cin >> angleA;
    cout << "Enter Side B : ";
    cin >> lenB;
    cout << "Enter Angle B: ";
    cin >> angleB;

    if (angleA == "x") {
        double angleA = stod(lenA) * sind(stod(angleB)) / stod(lenB);
        return angleA;
    } else if (lenA == "x") {
        double lenA = sind(stod(angleA)) * stod(lenB) / sind(stod(angleB));
        return lenA;
    } else if (angleB == "x") {
        double angleB = sind(stod(angleA)) * stod(lenB) / stod(angleA);
        return angleB;
    } else if (lenB == "x") {
        double lenB = stod(lenA) * sind(stod(angleB)) / sind(stod(angleA));
        return lenB;
    }
}
double lawofCos(){
    int place;
    char place2;
    double values[5];
    double a, b, c, cosAng;
    cout << "Enter '0' for the variable you wish to solve for.\n";
    for (int i = 0; i < 4; i++) {
        char letter = 65 + i;
        if (i != 3) {
            cout << "Enter value for side " << letter << ": ";
            cin >> values[i];
            if (values[i] == 0) {place = i;};
        } else {
            cout << "Enter angle: ";
            cin >> values[i];
            if (values[i] == 0) {
                place = i;
                cout << "Which angle is that? [A,B,C]: ";
                cin >> place2;
            };

;           continue;
        }
    }
    switch(place){
        case 0 :
            a = sqrt(pow(values[1],2) + pow(values[2],2) - (2*values[1] * values[2] * cosd(values[3])));
            return a;
            break;
        case 1 :
            b = sqrt(pow(values[0],2) + pow(values[2],2) - (2 * values[0] * values[2] * cosd(values[3])));
            return b;
            break;
        case 2 :
            c = sqrt(pow(values[0],2) + pow(values[1],2) - (2 * values[0] * values[1] * cosd(values[3])));
            return c;
            break;
        case 3 :
            switch (place2) {
                case 'A' : case 'a' :
                    cosAng = acosd((pow(values[1],2) + pow(values[2],2) - pow(values[0],2))/(2*values[1] * values[2]));
                    return cosAng;
                    break;
                case 'B': case 'b' :
                    cosAng = acosd((pow(values[0],2) + pow(values[2],2) - pow(values[1],2))/(2*values[0] * values[2]));
                    return cosAng;
                    break;
                case 'C' : case 'c':
                    cosAng = acosd((pow(values[0],2) + pow(values[1],2) - pow(values[2],2))/(2*values[0] * values[1]));
                    return cosAng;
                    break;
                default:
                    cout << "ERROR HAS OCCURED\n";
                    break;
            }
        default:
            cout << "ERROR HAS OCCURED\n";
            break;
    }
}
int main() {
    double input1, input2, result;
    string list[6] = {"[1] Vector Calculators", "[2] Law of Sin Calculator", "[3] Law of Cos Calculator", "[c] Clear screen", "[q] Exit", "---------------------------"};
    char option;
    char option2;
    while (true) {
        cout << "===============================" << endl;
        for (int i = 0; i < 6; i++) {
            cout << list[i] << endl;
        }
        cout << "> ";
        cin >> option;
        switch (option) {
            case '1' :
                cout << "===========================" << endl;
                cout << "[1] Convert from MD to Component\n[2] Convert from Component to MD\n[3] Add vectors in MD form\n";
                cout << "> ";
                cin >> option2;
                switch (option2) {
                    case '1' :
                        cout << "Input Magnitude: ";
                        cin >> input1;
                        cout << "Input Direction: ";
                        cin >> input2;
                        vMagDir vectorA;
                        vectorA.mag = input1;
                        vectorA.dir = input2;
                        vCompForm vectorB;
                        vectorB = magnitudeToComponent(vectorA.mag, vectorA.dir);
                        cout << "-----------------------\n";
                        cout << "Vx: " << vectorB.x << endl;
                        cout << "Vy: " << vectorB.y << endl;
                        break;
                    case '2' :
                        double tempVx, tempVy, tempMag, tempDir;
                        cout << "Input Vx: ";
                        cin >> tempVx;
                        cout << "Input Vy: ";
                        cin >> tempVy;
                        tempMag = sqrt((tempVx * tempVx) + (tempVy * tempVy));
                        tempDir = atand(tempVy / tempVx);
                        cout << "-----------------------\n";
                        cout << "Magnitude: " << tempMag << endl;
                        cout << "Direction: " << tempDir << endl;
                        break;
                    case '3' :
                        double avm, avd, bvm, bvd;
                        cout << "Input Vector A Magnitude: ";
                        cin >> avm;
                        cout << "Input Vector A Direction: ";
                        cin >> avd;
                        cout << "Input Vector B Magnitude: ";
                        cin >> bvm;
                        cout << "Input Vector B Direction: ";
                        cin >> bvd;
                        vectorAddMD(avm, avd, bvm, bvd);
                        break;

                    case 'q' :
                        exit(0);
                        break;
                    default :
                        cout << "Invalid Input: " << option << " is not an option" << endl;
                        break;
                }
                break;
            case '2' :
                result = lawOfSin();
                cout << "-----------------------\n";
                cout << "Missing Angle/Length: " + to_string(result) << endl;
                break;
            case '3' :
                result = lawofCos();
                cout << "-----------------------\n";
                cout << "Missing Angle/Length: " + to_string(result) << endl;
                break;
            case 'c' :
                system("clear");
                break;
            case 'q' :
                exit(0);
                break;
            default :
                cout << "Invalid Input: " << option << " is not an option" << endl;
                break;
        }
    }
    return 0; // End program
}
