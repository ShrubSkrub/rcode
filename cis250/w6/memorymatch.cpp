#include <iostream>
using namespace std;
#include <string>
// #include "memorymatch.h"

#include <cstdlib>
#include <ctime>

class MemoryMatchGame{
    protected:
        string cards[50] = {"H ", "He", "Li", "Be", "B ", "C ", "N ", "O ", "F ", "Ne",
                            "Na", "Mg", "Al", "Si", "P ", "S ", "Cl", "Ar", "K ", "Ca",
                            "Sc", "Ti", "V ", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn",
                            "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y ", "Zr",
                            "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn"};
        string face = "E";  // Theme
        int diff = 0;  // Difficulty
        int time = 0;  // Game speed
        string answerArr[8][8];  // Holds answers
        string displayArr[8][8];  // What is shown to the user
        // string *answerArr;
        // int *displayArr;
        int input;  // Temp for all needed cin
        int arrSize = 0;  // Set during difficulty, limits function which act on array
        bool gameRunning = true;  // Used to keep game running, or stop it
        int pairs = 0;  // Tracks how many pairs have been found
    public:
        MemoryMatchGame(){
            // Fill arrays
            for (int i = 0; i < input; i++){
                for (int j = 0; j < input; j++){
                    answerArr[i][j] = "  ";
                    displayArr[i][j] = "E ";
                }
            }
        }
        void difficulty(){
            cout << "Choose difficulty:\n4 x 4 grid (Easy)\n6 x 6 grid (Moderate)\n";
            cout << "8 x 8 grid (Difficult)\n    - Input 4, 6, or 8 -\n";
            // Check for valid input
            bool temp1 = true;
            while (temp1) {
                cin >> input;
                switch (input) {
                    case 8:
                        pairs = 32;
                        temp1 = false;
                        break;
                    case 6:
                        pairs = 18;
                        temp1 = false;
                        break;
                    case 4:
                        pairs = 8;
                        temp1 = false;
                        break;
                    default:
                        cout << "Not a valid option. Try again.\n";
                        break;
                }
            }
            arrSize = input;
        }
        void dealCards(){
            cout << "Dealing cards...\n";
            // Create array's size
            // Shuffle cards array
            for (int i = 0; i < 50; i++){
                int r = rand() % 50;
                string temp = cards[i];
                cards[i] = cards[r];
                cards[r] = temp;
            }

            // Deal CARDS into temp array
            // Needs cards to be input twice
            int cardCount = 0;
            string tempArr[(input * 2)][(input * 2)];
            for (int i = 0; i < (input * 2); i++){
                for (int j = 0; j < (input * 2); j++){
                    tempArr[i][j] = cards[cardCount];
                    cardCount++;
                    tempArr[i][j++] = cards[cardCount];
                    cardCount++;
                }
            }

            // Deal CARDS into answer array
        }
        void speed(){
            cout << "Choose time interval:\n6 secs (Easy)\n4 secs (Moderate)\n";
            cout << "2 secs (Difficult)\n    - Input 6, 4, or 2 -\n";
            // Check for valid input
            bool temp1 = true;
            while (temp1) {
                cin >> input;
                switch (input) {
                    case 6:
                    case 4:
                    case 2:
                        temp1 = false;
                        break;
                    default:
                        cout << "Not a valid option. Try again.\n";
                        break;
                }
            }
            time = input;
        }

        void winCheck(){
        }
        // void display(){
        // }
        // bool inputCheck(string in){
        // }



        void start(){
            system("clear");
            cout << "Welcome to Memory Match!\n\n";
            difficulty();
            cout << "\n====================\n";
            speed();
            cout << "\n====================\n";
            system("clear");

            dealCards();

            while (gameRunning) {
                // TODO Fix printing, possibly fault of array filling?
                printArr();
                // User selects square1
                // User selects square2
                // Compare squares

                // Check if all squares have been found
            }
        }

// ----------------------------------------------------------------------

        // Old, possibly useful functions
        void printArr() {
            switch (arrSize) {
                case 8:
                    cout << "\n[ ][1][2][3][4][5][6][7][8]\n";
                    for (int i = 0; i < 8; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                            case 4:
                                cout << "[E]";
                                break;
                            case 5:
                                cout << "[F]";
                                break;
                            case 6:
                                cout << "[G]";
                                break;
                            case 7:
                                cout << "[H]";
                                break;
                        }
                        for (int j = 0; j < 8; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
                case 6:
                    cout << "\n[ ][1][2][3][4][5][6]\n";
                    for (int i = 0; i < 6; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                            case 4:
                                cout << "[E]";
                                break;
                            case 5:
                                cout << "[F]";
                                break;
                        }
                        for (int j = 0; j < 6; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
                case 4:
                    cout << "\n[ ][1][2][3][4]\n";
                    for (int i = 0; i < 4; i++) {
                        switch (i) {
                            case 0:
                                cout << "[A]";
                                break;
                            case 1:
                                cout << "[B]";
                                break;
                            case 2:
                                cout << "[C]";
                                break;
                            case 3:
                                cout << "[D]";
                                break;
                        }
                        for (int j = 0; j < 4; j++) {
                            cout << "[";
                            cout << displayArr[i][j];
                            cout << "]";
                        }
                        cout << endl;
                    }
                    break;
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

        bool isNumber(int in) {
            if (in < 0) {
                return true;
            } else {
                return false;
            }
        }

        void chooseCells() {
            char letter, yn;
            int number = 10, letterNum = 10;
            while (true) {
                for (int i = 0; i < 8; i++) {
                    letterNum = 10;
                    while (letterNum == 10) {
                        cout << "Enter cell " << (i + 1) << " (ie. H8): ";
                        cin >> letter >> number;
                        letterNum = convCharToNum(letter);
                    }
                    // arr[letterNum][number - 1] = 1;
                }
                printArr();
                cout << "Is this correct? (y or n): ";
                while (true) {
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

        void pickCell() {
            char letter;
            int number, letterNum, loop = 0, loop1 = 0;
            while (loop1 == 0) {
                while (loop == 0) {
                    cout << "Enter cell (ie. H8): ";
                    cin >> letter >> number;
                    letterNum = convCharToNum(letter);
                    // if (arr[letterNum][number - 1] == 1) {
                    //     cout << "You guessed correctly, go again!\n";
                    //     arr[letterNum][number - 1] = 0;
                    // } else if (arr[letterNum][number - 1] == 2) {
                    //     cout << "You already guessed this one.\n";
                    //     loop = 1;
                    //     loop1 = 1;
                    // } else {
                    //     cout << "You guessed incorrectly...\n";
                    //     loop = 1;
                    //     loop1 = 1;
                    // }
                }
            }
        }

};

int main(){
    MemoryMatchGame Game1;
    Game1.start();
}
