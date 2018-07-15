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

    animal *ptrBaseAnimal = new animal[4];
    ptrBaseAnimal[0] = c1;
    ptrBaseAnimal[1] = d1;
    ptrBaseAnimal[2] = e1;
    ptrBaseAnimal[3] = m1;

    for (int i = 0; i < 4; i++) {
        ptrBaseAnimal[i]->animalSound;
    }
}
