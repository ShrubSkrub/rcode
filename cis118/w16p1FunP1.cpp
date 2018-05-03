#include <iostream>
using namespace std;

string getName(string &temp);
int getAge(int &temp);
void printInfo(string &tName, int &tAge);

int main() {
    string firstName;
    int age;

    getName(firstName);
    getAge(age);
    printInfo(firstName, age);

    return 0; // End program
}

string getName(string &temp) {
    cout << "Enter your name: ";
    cin >> temp;
    return temp;
}

int getAge(int &temp) {
    cout << "Enter your age: ";
    cin >> temp;
    return temp;
}

void printInfo(string &tName, int &tAge) {
    cout << "Name: " << tName << endl;
    cout << "Age: " << tAge << endl;
}
