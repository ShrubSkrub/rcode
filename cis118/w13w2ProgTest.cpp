#include <iostream>
using namespace std;
int main() {
    // Calculate grade average

    int numberGrades = 0;
    int sumGrades = 0;
    int aGrade = 0;

    cout << "How many grades to enter: ";
    cin >> numberGrades;

    int i = 1;  // 1st element of loop - declare and set initial value
    while (i <= numberGrades) {  // 2nd element of loop - condition
        cout << "Enter Grade: ";
        cin >> aGrade;

        sumGrades = sumGrades + aGrade;
        i++;  // 3rd element of loop - update value
    }

    cout << "Grade Average = " << sumGrades / numberGrades << endl;

    return 0;
}
