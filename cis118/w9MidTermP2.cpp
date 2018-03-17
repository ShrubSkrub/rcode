#include <iostream>                              // Changed oi to io
using namespace std;                             // Removed extra ;
#include <string>
int main() {
    string favoriteFirstName;
    int age = 0;
    char gender = 'x';
    cout << "Enter your favorite first name: ";  // cout allows you to write a message // Removed extra e
    cin >> favoriteFirstName;                    // cin allows you to input a value
    cout << endl;                                // Swapped >> to <<
    cout << "Enter your age: ";                  // Added r to you
    cin >> age;
    cout << endl;
    cout << "Enter your Gender F/M: ";           // Added r to you
    cin >> gender;                               // Fixed capitalization
    // Logical AND table --  ((exp1) && (exp2) && (exp3) )...
    if ( ( age == 15 ) && ( gender == 'M') && ( favoriteFirstName == "Sean"  ) )  // Added e to Nam, missing &, and a ) at the end. Also changed values to make them accurate to me
     {  // And conditions: Takes ALL to be TRUE, so result is TRUE             // Fixed spelling
        cout << endl << " ALL conditions ARE TRUE " << endl;     }             // Removed extra l
     else     {
        // And conditions: Only takes one FALSE condition, so result is FALSE  // Fixed spelling
        cout << " One or more conditions is FALSE " << endl;     }             // changed cout<> to cout <<
     // system("pause"); // pause statement Only for PC, not MAC  - Macs Comment // out this line  // Commented out because on linux
return 0;
}
// Fix and run the code.  Turn in fixed code with commends and screen print of successful execution.
