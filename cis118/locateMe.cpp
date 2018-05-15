#include <iostream>
using namespace std;

void printArr(int arr[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << "(";
            cout << i << ", " << j << " = ";
            cout << arr[i][j];
            cout << ")"
                 << ", ";
        }
    }
}

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
        default:
            cout << "Error, not valid input\n";
            letterNum = 10;
    }
    return letterNum;
}

void chooseCells(int arr[8][8]) {
    char letter;
    int number, letterNum = 10;
    for (int i = 0; i < 8; i++) {
        while (letterNum == 10) {
            cout << "Enter cell " << (i + 1) << " (ie. H8): ";
            cin >> letter >> number;
            letterNum = convCharToNum(letter);
        }
        arr[letterNum][number - 1] = 1;
    }
}

void pickCell(int arr[8][8]) {
    char letter;
    int number, letterNum, loop = 0, loop1 = 0;
    while (loop1 == 0) {
        while (loop == 0) {
            cout << "Enter cell (ie. H8): ";
            cin >> letter >> number;
            while (letterNum == 10) {
                letterNum = convCharToNum(letter);
            }
        }
        if (arr[letterNum][number - 1] == 1) {
            cout << "You guessed correctly!\n";
            arr[letterNum][number - 1] = 2;
        } else if (arr[letterNum][number - 1] == 2) {
            cout << "You already guessed this one.\n";
            loop1 = 1;
        } else {
            cout << "You guessed incorrectly...\n";
            loop1 = 1;
        }
    }
}

bool checkArray(int arr[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[i][j] == 0) {
                return false;
            } else {
                return true;
                j = 8;
                i = 8;
            }
        }
    }
}

int main() {
    int p1[8][8] = {{0}};
    int p2[8][8] = {{0}};
    int emptyBoard[8][8] = {{0}};
    bool check = true;

    system("clear");
    cout << "Player 1, choose your cells\n";
    chooseCells(p1);
    system("clear");
    cout << "Player 2, choose your cells\n";
    chooseCells(p2);
    system("clear");

    while (true) {
        cout << "Player 1's turn!\n";
        pickCell(p2);

        // Check for win condition
        check = checkArray(p1);
        if (check) {
            cout << "Player 2 wins!\n";
            break;
        } else {
            cout << "Player 1 wins!\n";
            break;
        }

        cout << "Player 2's turn!\n";
        pickCell(p1);

        // Check for win condition
        check = checkArray(p1);
        if (check) {
            cout << "Player 2 wins!\n";
            break;
        } else {
            cout << "Player 1 wins!\n";
            break;
        }
    }

    return 0;  // End program
}
