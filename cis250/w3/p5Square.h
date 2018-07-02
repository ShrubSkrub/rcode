#pragma once

class square {
    protected:
    int length, width;
    public:
    square() { 
        length = 0;
        width = 0;
    }
    int getWidth() {
        return width;
    }
    void setWidth(int w) {
        width = w;
    }
    int getLength() {
        return length;
    }
    void setLength(int l) {
        length = l;
    }
    int getArea() {
        return (width * length);
    }
};
