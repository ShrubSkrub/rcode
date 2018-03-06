#include <iostream>

using namespace std;
int main() {
    int haveMoney, haveTime, amHungry, restaurantOpen, haveTransportation;

    cout << "Do you have money? [1] yes, [2] no: ";
    cin >> haveMoney;
    if (haveMoney == 1) {
        cout << "Do you have time? [1] yes, [2] no: ";
        cin >> haveTime;
        if (haveTime == 1) {
            cout << "Are you hungry? [1] yes, [2] no: ";
            cin >> amHungry;
            if (amHungry == 1) {
                cout << "Is the restaurant open? [1] yes, [2] no: ";
                cin >> restaurantOpen;
                if (restaurantOpen == 1) {
                    cout << "Do you have transportation? [1] yes, [2] no: ";
                    cin >> haveTransportation;
                    if (haveTransportation == 1) {
                        cout << "You can have lunch at McDonalds.";
                    } else {
                        cout << "You can't get to the restaurant, so you can't get food.";
                    }
                } else {
                    cout << "You can't get food if the restaurant is closed.";
                }
            } else {
                cout << "You shouldn't get food because you are not hungry.";
            }
        } else {
            cout << "You don't have time to get food.";
        }
    } else {
        cout << "You don't have money to buy food with.";
    }

    return 0;  // End program
}
