#include <iostream>  // Added include and <
using namespace std;

int main()  // start program  //Changed I to i
{           // Added {

    // Declare and Initialize Variables
    int height = 0;
    int feet = 0;    // Added ;
    int inches = 0;  // Changed I to i

    // Prompt for height
    cout << "Enter your height in inches: ";  // Changed >> to <<
    cin >> height;                            // Changed H to h

    // Calculate Height in feet and inches
    feet = height / 12;  // Switch order so feet is in front
    inches = height % 12;

    // Print out height in feet and inches   //Added /
    cout << "You are " << feet << " feet and " << inches << " inches";  // Removed t, changed FEET to feet, added <, changed <> to <<, changed >> to <<, added " " before inches

    // system("pause");  // Mac user comment out this line by placing // front of it.
    // PC users -Hint replace the " with the ones on your computer--coping code cause error, so just type it.
    return 0;

}  // end of program
