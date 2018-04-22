#include <iostream>

using namespace std;
int main() {
    int ages[5] = {0};  // You use 0 to 10, when you mean 0 to 3
    for (int i = 0; i <= 10; i++) {
        cout << "ages[" << i << "]: " << ages[i] << endl;
    }

    return 0;  // End program
}
