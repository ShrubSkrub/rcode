// Code and Decode a character
#include <iostream>
using namespace std;

char CodeLetter(char c);    // prototype for function - code below int main
char DecodeLetter(char c);  // prototype for function - code below int main
int main() {
    char codedLetter;
    char decodedLetter;
    char letter = 'a';  // change me to a different character.

    cout << "Letter = " << letter << endl;
    codedLetter = CodeLetter(letter);
    cout << "Coded Letter = " << codedLetter << endl;
    decodedLetter = DecodeLetter(codedLetter);
    cout << "Decoded Letter = " << decodedLetter << endl;

    // system ( "pause");
    return 0;
}

char CodeLetter(char c) { return c + 1; }  // clue .. "you can add 1 to a char"
char DecodeLetter(char c) { return c - 1; }  // clue .. "you can subtract 1 from a char"

// 1. You get the next character in the ascii table
// 2. The char data type is really just a number that refers to the ascii table
