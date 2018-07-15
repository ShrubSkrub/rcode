#include <iostream>
using namespace std;

class animal {
    protected:
        string animalName;
        string sound;
    public:
        virtual void animalSound() {
            cout << animalName << " says " << sound << endl;
        };
};

class cat: public animal{
    public:
    cat(){
        animalName = "cat";
        sound = "meow";
    }
};

class dog: public animal{
    public:
    dog(){
        animalName = "dog";
        sound = "woof";
    }
};

class elephant: public animal{
    public:
    elephant(){
        animalName = "elephant";
        sound = "*trumpet*";
    }
};

class mouse: public animal{
    public:
    mouse(){
        animalName = "mouse";
        sound = "squeak";
    }
};

int main(){
    int input;
    cat c1;
    dog d1;
    elephant e1;
    mouse m1;
    cout << "Input animal, 1-4: ";
    cin >> input;
    switch (input) {
        case 1:
            c1.animalSound();
            break;
        case 2:
            d1.animalSound();
            break;
        case 3:
            e1.animalSound();
            break;
        case 4:
            m1.animalSound();
            break;
    }
}
