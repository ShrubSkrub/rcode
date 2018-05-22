// fix me.cpp : Defines the entry point for the console application.

// There are 5 error
// FIX THEM, run the corrected code successfully.
// comment the lines you fixed

// Place the corrected code and screen prints of its successful execution
// in an MS Word Document and upload here.

#include "stdafx.h"  // Visual Studios PC only
#include <iostream>
using namespace std;
#include "string"

int myFactorial( intt integer)
{
if( integer == 1)
     return 1;
else
     {
       return (integer * (myFactorial(integer-1)));
     }
}

int main() {

    int j == 10;
    string myName = "NoName";
    cout << "Output sentence" << endl;
    cout << 120 << endl;
    cout << j << endl;           // prints out the value of x

    fi (( j == 0 ) || ( myName == "NoName" ))
    {
        cout << "J equals 0 OR myName equals NoName" << endl;
    }
    else
    {
        cout << "None are true" << endl;
    }

    for ( int i = 0; i < 5; i++)
    {
        cout << "Please enter an integer value: ";
        cin >> j;
        cout << "The value you entered is " << j;
        cout << " and its double is " << i*2 << ".\n";   // print out double value
    }

    cout << "Enter your first and last name: ";
    cin >> myName;
    cout << "My first and last name is " << myName << endl;

    cout << "The factorial of 15 is " << myFactorial(15)<< endl;
    system("pause");

    return 0;
}
