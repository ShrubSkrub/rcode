#pragma once

class cube: public square {
    protected:
    int height;
    public:
    cube() {
        height = 0;
    }
    int getHeight() {
        return height;
    }
    void setHeight(int h) {
        height = h;
    }
    int getVolume() {
        return (width * length * height);
    }
};
