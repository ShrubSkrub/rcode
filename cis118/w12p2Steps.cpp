#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int spaces = 7;
    for(int i = 1; i <=6; ++i) {
        cout << setw(spaces)<< "* O  \n";
        cout << setw(spaces)<< "*/|\\ \n";
        cout << setw(spaces)<< "*/ \\ \n";
        cout << setw(spaces)<< "*****\n";
        spaces = spaces + 4;
    }

    return 0; // End program
}
