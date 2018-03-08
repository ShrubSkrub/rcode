#include <iostream>  //Name of prewritten code <file> you want to use
                     //Good programmers REUSE existing code
                     //#includes names files/libraries of existing code you want to reuse
using namespace std; //Command to avoid typing std:: in front of cout and endl commands
int main( )          //All programs start at main simple version of main, others possible
{
    cout << "Sean Duarte - 2/24/18" << endl; // Name and date to show this is my code
    int height = 0, feet = 0, inches = 0; // Declare and initialize variables
    cout << "What is your height in inches (example 66): " << endl; // Print prompt for height
    cin >> height;        // Pause and wait for user to Input height in inches
    feet = height / 12;   // Calculate Feet
    inches = height % 12; // Calculate remaining inches
    cout << "My Height is " << feet << " feet and " << inches << " Inches " << endl << endl;
                          // Print to monitor message and results of calculations
    // system ("Pause");     // Command needed to see output on PC remove this line on Mac
    return 0;             // End program
}
