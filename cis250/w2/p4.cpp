 // ssss.cpp : Defines the entry point for the console application.

// Sample Class - Print and Study, RUN the code...

// #include "stdafx.h" // PC only using Visual Studios.. else delete line..

#include <iostream>

#include <string>

using namespace std;

// STEP 1 - DEFINE THE new datatype/Class  'aThing'

class aThing {

public:  // Public means that is can be access in step 3 with the dot notation

    aThing(void) { weight = 99; } // Note no return type in constructor functions

    // No Parameters  called Default constructor

    aThing( double w) { weight = w; } // Constructor with parameter called Parameterized constructor

    double getWeight(void) { return weight; } // public functions  accessible by dot notation

    void setWeight( double W ) { weight = W; }

private: // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function

    double weight; // private variables only accessible by a function

};

int main()

{ // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.

    aThing ThingOne;

    cout << "Constructor Set Weight: " << ThingOne.getWeight() << endl;

    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation

    ThingOne.setWeight(110);

    cout << "Weight is: ";

    cout << "setWeight Function/Method Set Weight: " << ThingOne.getWeight() << endl;

    // system("PAUSE");  // MAC User comment this line out.

    return 0;

}
