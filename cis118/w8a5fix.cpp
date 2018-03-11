#include <iostream>
using namespace std;
int main () {                                               //Changed integer to int, added {
    // Converts grade Points into a Letter grade.

    int gradePoints = 0;                                    //Changed == to = and 00 to 0

    cout << "Enter Grade Points: ";                         //Changed >< to <<
    cin >> gradePoints;

    if ( gradePoints >= 90) { cout << "Grade = A"; }        //Changed -42 to 90
    else if ( gradePoints >= 80 ) { cout << "Grade = B"; }  //Changed =< to >=
    else if ( gradePoints >= 70 ) { cout << "Grade = C"; }  //Added ;
    else if ( gradePoints >= 60 ) { cout << "Grade = D"; }
    else { cout << "Grade = F"; }                           //Changed A to F

    cout << endl;
    // system ( "pause");                                   //Commented out, don't need on Linux
    return 0;
}
