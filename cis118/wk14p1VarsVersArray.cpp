#include <iostream>

using namespace std;
int main() {
    // Part 1
    int var0 = 0, var1 = 0, var2 = 0, var3 = 0, var4 = 0, var5 = 0;
    int var6 = 0, var7 = 0, var8 = 0, var9 = 0, var10 = 0, var11 = 0;
    int var12 = 0, var13 = 0, var14 = 0, var15 = 0, var16 = 0;

    cout << "Enter value for variable: ";
    cin >> var0;
    cout << "Enter value for variable: ";
    cin >> var1;
    cout << "Enter value for variable: ";
    cin >> var2;
    cout << "Enter value for variable: ";
    cin >> var3;
    cout << "Enter value for variable: ";
    cin >> var4;
    cout << "Enter value for variable: ";
    cin >> var5;
    cout << "Enter value for variable: ";
    cin >> var6;
    cout << "Enter value for variable: ";
    cin >> var7;
    cout << "Enter value for variable: ";
    cin >> var8;
    cout << "Enter value for variable: ";
    cin >> var9;
    cout << "Enter value for variable: ";
    cin >> var10;
    cout << "Enter value for variable: ";
    cin >> var11;
    cout << "Enter value for variable: ";
    cin >> var12;
    cout << "Enter value for variable: ";
    cin >> var13;
    cout << "Enter value for variable: ";
    cin >> var14;
    cout << "Enter value for variable: ";
    cin >> var15;
    cout << "Enter value for variable: ";
    cin >> var16;

    cout << var0 << endl;
    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    cout << var4 << endl;
    cout << var5 << endl;
    cout << var6 << endl;
    cout << var7 << endl;
    cout << var8 << endl;
    cout << var9 << endl;
    cout << var10 << endl;
    cout << var11 << endl;
    cout << var12 << endl;
    cout << var13 << endl;
    cout << var14 << endl;
    cout << var15 << endl;
    cout << var16 << endl;

    // Part 2
    cout << "Part 2\n";

    int altVar[16] = {0};

    for ( int i = 0; i < 16; i++) {
        cout << "Enter value for variable " << i << ": ";
        cin >> altVar[i];
    }

    for (int i = 0; i < 16; i++) {
        cout << altVar[i] << endl;
    }

    return 0;  // End program
}

// Method 2 is *much* simpler than method 1
