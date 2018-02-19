#include <iostream>
using namespace std;

int main()
{
    double n1, n2, output;
    char op;

    cout << "Input operation, seperated by spaces: ";
    cin >> n1 >> op >> n2;

    switch (op)
    {
        case '+':
            output = n1+n2;
            break;
        case '-':
            output = n1-n2;
            break;
        case '*':
            output = n1*n2;
            break;
        case '/':
            output = n1/n2;
            break;
        default:
            cout << "Error: Incorrect operator.";
            break;
    }

    cout << "Answer: " << output << "\n";
}
