#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class calculator{
    private:
        int mode;
    public:
        calculator(char f){
           // int  f = f;
            mode = f; 
           }
        calculator(char f = ' '){
            char f;
            while(char f =' '){
            cout << "No input\nEnter Input";
            cin >> f;
            }
            mode = f;
        }
        int calcSorter(){
            switch(mode){
                case(1):
                    //open function 1;
                    //break;
            }
        }

};

int main() {
    char x;
    string menu[2]={
    "Vector Calculator",
    "Placeholder"
    };
    for(int i = 0; i != sizeof(menu) ; i++){
        cout << menu[i] << endl;
        if(i = (sizeof(menu) -1)){
            cout << "Enter MOde\n";
        }
    }
    cin >> x;
    calculator math(x);

    return 0; // End program
}

