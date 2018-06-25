#include <iostream>

#include <string>

using namespace std;

// STEP 1 - DEFINE THE new datatype/Class  'aThing' - Using Function Prototypes

class aThing {

public:  // Public means that is can be access in step 3 with the dot notation

    aThing(void);

    // Note no return type in constructor functions

    // No Parameters  called Default constructor

    aThing(double w); // Constructor with parameter called Parameterized constructor

    double getWeight(void); // public functions  accessible by dot notation

    public: void setWeight( double W );

    private: // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function

    double weight; // private variables only accessible by a function

};

int main()

{  // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.

    // Uses the Default Constructor - Function with NO arguments

    aThing ThingOne;

    cout << "Defalut Constructor Set Weight: " << ThingOne.getWeight() << endl;

    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation

    ThingOne.setWeight(110);

    cout << "Weight is: ";

    cout << "setWeight Function/Method Set Weight: " << ThingOne.getWeight() << endl;

    // STEP 2 - DECLARATION - USE the Paramitized Constructor Function in a Declaration statement to create 'ThingTwo'

    aThing ThingTwo(44);

    cout << "Paramitized Constructor Set Weight: " << ThingTwo.getWeight() << endl;

    // STEP 3 - Use the OBJECT defined in step 2 - With dot notation

    ThingTwo.setWeight(110);

    cout << "Weight is: ";

    cout << "setWeight Function/Method Set Weight: " << ThingTwo.getWeight() << endl;

    system("PAUSE");  // MAC User comment this line out.

    return 0;

}

// Function Prototypes for aThing Class

// Note the :: Scope Resolution operator '::' - used to clarify which class the functions belong to..

aThing::aThing(void) { weight = 99; }

// Note  -no return type in constructor functions

// No Parameters  called Default constructor

aThing::aThing(double w) { weight = w; } // Constructor with parameter called Parameterized constructor

double aThing::getWeight(void) { return weight; } // public functions  accessible by dot notation

void aThing::setWeight( double W ) { weight = W; }
