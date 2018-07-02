#pragma once

class colorPicker {
    private:
    string colorArray[7];
    public:
    colorPicker() { 
        // Defalut Consructor assign values to array
        // Use 7 assignment statements to assign each color to the color array
        colorArray[0] ="Red";
        colorArray[1] ="Green";
        colorArray[2] ="Purple";
        colorArray[3] ="Yellow";
        colorArray[4] ="Orange";
        colorArray[5] ="Indigo";
        colorArray[6] ="Pink";
    }
    void printAllColors() {
        // use for loop to print out all colors
        for (int i = 0 ;i < 7; i++)
        { cout << colorArray[i] << endl;}
        }
        string randomColor() {
        srand((unsigned)time(0));
        // pick a random number between 1 and 7
        int i =0;
        i = rand()%7;
        return colorArray[i];
    }
};
