#include <iostream>
using namespace std;

// Function is used only to print array contents
void printArr(char arr[15][15]) {
    cout << "\n[   ][ 1 ][ 2 ][ 3 ][ 4 ][ 5 ][ 6 ][ 7 ][ 8 ][ 9 ][ 10][ 11][ 12][ 13][ 14][ 15]\n";
    for (int i = 0; i < 15; i++) {
        switch (i) {
            case 0:
                cout << "[ A ]";
                break;
            case 1:
                cout << "[ B ]";
                break;
            case 2:
                cout << "[ C ]";
                break;
            case 3:
                cout << "[ D ]";
                break;
            case 4:
                cout << "[ E ]";
                break;
            case 5:
                cout << "[ F ]";
                break;
            case 6:
                cout << "[ G ]";
                break;
            case 7:
                cout << "[ H ]";
                break;
            case 8:
                cout << "[ I ]";
                break;
            case 9:
                cout << "[ J ]";
                break;
            case 10:
                cout << "[ K ]";
                break;
            case 11:
                cout << "[ L ]";
                break;
            case 12:
                cout << "[ M ]";
                break;
            case 13:
                cout << "[ N ]";
                break;
            case 14:
                cout << "[ O ]";
                break;
        }
        for (int j = 0; j < 15; j++) {
            cout << "[ ";
            cout << arr[i][j];
            cout << " ]";
        }
        cout << endl;
    }
}

// Function is used in other functions to convert
// user input from letters to numbers
int convCharToNum(char input) {
    int letterNum;
    switch (input) {
        case 'A':
        case 'a':
            letterNum = 0;
            break;
        case 'B':
        case 'b':
            letterNum = 1;
            break;
        case 'C':
        case 'c':
            letterNum = 2;
            break;
        case 'D':
        case 'd':
            letterNum = 3;
            break;
        case 'E':
        case 'e':
            letterNum = 4;
            break;
        case 'F':
        case 'f':
            letterNum = 5;
            break;
        case 'G':
        case 'g':
            letterNum = 6;
            break;
        case 'H':
        case 'h':
            letterNum = 7;
            break;
        case 'I':
        case 'i':
            letterNum = 8;
            break;
        case 'J':
        case 'j':
            letterNum = 9;
            break;
        case 'K':
        case 'k':
            letterNum = 10;
            break;
        case 'L':
        case 'l':
            letterNum = 11;
            break;
        case 'M':
        case 'm':
            letterNum = 12;
            break;
        case 'N':
        case 'n':
            letterNum = 13;
            break;
        case 'O':
        case 'o':
            letterNum = 14;
            break;
        default:
            cout << "Error, not valid input\n";
            letterNum = 20;
    }
    return letterNum;
}

// Simply used to check if the user actually entered a number
bool isNumber(int in) {
    if (in < 0) {
        return true;
    } else {
        return false;
    }
}

// Called at start of game to fill the arrays for each player
void chooseCells(char arr[15][15]) {
    char letter, yn;
    int number = 20, letterNum = 20;
    while (true) {
        for (int i = 0; i < 8; i++) {
            letterNum = 20;
            while (letterNum == 20) {
                cout << "Enter cell " << (i + 1) << " (ie. H8): ";
                cin >> letter >> number;
                letterNum = convCharToNum(letter);
            }
            arr[letterNum][number - 1] = 'x';
        }
        while (true) {
            system("clear");
            printArr(arr);
            cout << "Is this correct? (y or n): ";
            cin >> yn;

            if (yn == 'y') {
                break;
            } else if (yn == 'n') {
                break;
            } else {
                cout << "Not y or n. Try again.\n";
            }
        }
        if (yn == 'y') {
            break;
        }
        system("clear");
    }
    system("clear");
}

// Used for each player turn
void pickCell(char arr[15][15]) {
    char letter;
    int number, letterNum, loop = 0, loop1 = 0;
    while (loop1 == 0) {
        while (loop == 0) {
            cout << "Enter cell (ie. H8): ";
            cin >> letter >> number;
            letterNum = convCharToNum(letter);
            if (arr[letterNum][number - 1] == 'x') {
                cout << "You guessed correctly, go again!\n";
                arr[letterNum][number - 1] = 'P';
            } else if (arr[letterNum][number - 1] == 'P') {
                cout << "You already guessed this one.\n";
                loop = 1;
                loop1 = 1;
            } else {
                cout << "You guessed incorrectly...\n";
                loop = 1;
                loop1 = 1;
            }
        }
    }
}

// Checking for win, true means array is empty
bool checkArray(char arr[15][15]) {
    int check = 0;
    for (int i = 0; i < 15 * 15; ++i) {
        if (arr[0][i] == 'x') {
            check = 1;
        }
    }

    if (check == 0) {
        // cout << "\nTrue, Array is empty\n";
        return true;
    } else {
        // cout << "\nFalse, Array has values\n";
        return false;
    }
}

int main() {
    char p1[15][15] = {{0}};
    char p2[15][15] = {{0}};
    char emptyBoard[15][15] = {{0}};
    bool check = false;
    char empty;

    system("clear");
    cout << "Player 1, choose your cells (A1 to O15)\n";
    chooseCells(p1);
    cout << "Player 2, choose your cells (A1 to O15)\n";
    chooseCells(p2);

    while (true) {
        system("clear");
        cout << "Player 1's turn!\nHere's your current board:";
        printArr(p1);
        pickCell(p2);
        // Check for win condition
        check = checkArray(p2);
        if (check) {
            cout << "Player 1 wins!\n";
            break;
        }
        check = false;

        system("clear");
        cout << "Player 2's turn!\nHere's your current board:";
        printArr(p2);
        pickCell(p1);
        // Check for win condition
        check = checkArray(p1);
        if (check) {
            cout << "Player 2 wins!\n";
            break;
        }
        check = false;
    }

    return 0;  // End program
}
