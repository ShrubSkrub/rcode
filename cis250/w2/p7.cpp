#include <iostream>
using namespace std;

class factorialClass {
    public:
    int FactNum(int number) {
        int temp;
        if(number <= 1) return 1;
        temp = number * FactNum(number - 1);
        return temp;
    }
};

int main() {
    factorialClass FactialInstance;
    cout << "The factorial of 3 is: " << FactialInstance.FactNum(3) << endl;
    cout << "The factorial of 5 is: " << FactialInstance.FactNum(5) << endl;
    cout << "The factorial of 7 is: " << FactialInstance.FactNum(7) << endl;
}
