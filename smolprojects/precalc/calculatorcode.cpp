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

double lawOfSin(){
    string angleA, lenA, angleB, lenB;
    cout << "Enter measurements below, establish missing angle/length with variable 'x'\n";
    cout << "Enter with format Angle A: ";
    cin >> angleA;
    cout << "Enter with format side A: ";
    cin >> lenA;
    cout << "Enter with format Angle B: ";
    cin >> angleB;
    cout << "Enter with format side B: ";
    cin >> lenB;

    if(angleA == "x") {
        double angleA = stod(lenA) * sind(stod(angleB)) / stod(lenB);
        return angleA;
    } else if(lenA == "x") {
        double lenA = sind(stod(angleA)) * stod(lenB) / sind(stod(angleB));
        return lenA;
    } else if(angleB == "x") {
        double angleB = sind(stod(angleA)) * stod(lenB) / stod(angleA);
        return angleB;
    } else if(lenB == "x") {
        double lenB = stod(lenA) * sind(stod(angleB)) / sind(stod(angleA));
        return lenB;
    }
}
double lawofCos(){
    int place;
    char place2;
    double values[5];
    double a, b, c, cosAng;
    cout << "Enter value 0 if value unknown\n";
    for (int i = 0; i < 4; i++) {
        char letter = 65 + i;
        if (i != 3) {
            cout << "Enter value for: " << letter << " ";
            cin >> values[i];
            if(values[i] == 0){place=i;};
        } else {
            cout << "Enter angle: ";
            cin >> values[i];
            if(values[i] == 0){
                place=i;
                cout << "of what position [A[],B,C]";
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
            switch(place2){
                case 'A' : case 'a' :
                    cosAng = (pow(values[1],2) + pow(values[2],2) - pow(values[0],2))/(2*values[1] * values[2]);
                    return cosAng;
                    break;
                case 'B': case 'b' :
                    cosAng = (pow(values[0],2) + pow(values[2],2) - pow(values[1],2))/(2*values[0] * values[2]);
                    return cosAng;
                    break;
                case 'C' : case 'c':
                    cosAng = (pow(values[0],2) + pow(values[1],2) - pow(values[2],2))/(2*values[0] * values[1]);
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
    string list[6] = {"Vector Component Calculator [1]", "Law of Sin Calculator [2]", "Law of Cos Calculator [3]",
                    "clear screen [c]", "exit [q]", "---------------------------"};
    char option;
    while (true){
        for(int i = 0; i < 6; i++){
            cout << list[i] << endl;
        }
        cin >> option;
        switch(option){
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
                cout << "Vx: " << vectorB.x << endl;
                cout << "Vy: " << vectorB.y << endl;
                break;
            case '2' :
                result = lawOfSin();
                cout << "Missing Angle/Len: " + to_string(result) << endl;
                break;
            case '3' :
                result = lawofCos();
                cout << "Missing Angle/Len: " + to_string(result) << endl;
                break;
            case 'c' :
                system("clear");
                break;
            case 'q' :
                exit(0);
                break;
            default :
                cout << "Invalid Input " << option << endl;
                break;
        }

    // vectorB = testFunc(vectorA.mag, vectorA.dir);

    }
    return 0; // End program
}
