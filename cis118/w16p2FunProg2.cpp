#include <iostream>
using namespace std;

int searchArray(string tName, string tArray[], int size);
void printAllNames(string tArray[], int size);
void deleteName(string tName, string tArray[], int size);

int main() {
    string firstNameArray[7] = {"Jim", "Tuyet", "Roberto", "Crystal", "Valla", "Mathilda"};
    string iName;

    cout << "Enter name to search: ";
    cin >> iName;

    if (searchArray(iName, firstNameArray, 7) < 7) {
        cout << "Name index: " << searchArray(iName, firstNameArray, 7) << endl;
    } else {
        cout << "Name not found\n";
    }

    printAllNames(firstNameArray, 7);

    cout << "\nTrying to delete name...\n";
    deleteName(iName, firstNameArray, 7);
    printAllNames(firstNameArray, 7);
    cout << endl;

    return 0; // End program
}

int searchArray(string tName, string tArray[], int size) {
    int i = 0;

    for (i=0; i < size; i++) {
        if (tName == tArray[i]) {
            return i;
            break;
        }
    }

    if (i >= (size - 1)) {
        return 7;
    }
}

void printAllNames(string tArray[], int size) {
    cout << "Current state of array: ";
    for (int i=0; i < size; i++) {
        if (tArray[i] != "") {
            cout << tArray[i] << " ";
        }
    }
}

void deleteName(string tName, string tArray[], int size) {
    if (7 != searchArray(tName, tArray, size)) {
        cout << "Deleting name!\n";
        tArray[searchArray(tName, tArray, size)] = "";
    }
}
