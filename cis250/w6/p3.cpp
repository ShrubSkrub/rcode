#include <iostream>
using namespace std;

class Distance {
    private:
        int yards;
        int feet;
        float inches;
    public:
        Distance(){
            yards = 0;
            feet = 0;
            inches = 0;
        }
        Distance(int y, int f, int i){
            yards = y;
            feet = f;
            inches = i;
        }
        void setDist(int y, int f, int i){
            yards = y;
            feet = f;
            inches = i;
        }
        Distance operator+(const Distance& d){
            Distance dist;
            dist.yards = this->yards + d.yards;
            dist.feet = this->feet + d.feet;
            dist.inches = this->inches + d.inches;
            return dist;
        }
        Distance operator-(const Distance& d){
            Distance dist;
            dist.yards = this->yards - d.yards;
            dist.feet = this->feet - d.feet;
            dist.inches = this->inches - d.inches;
            return dist;
        }
        bool operator==(const Distance& d){
            Distance dist;
            if (dist.yards == d.yards){
                if (dist.feet == d.feet){
                    if (dist.inches == d.inches){
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        bool operator<(const Distance& d){
            Distance dist;
            if (dist.yards < d.yards){
                if (dist.feet < d.feet){
                    if (dist.inches < d.inches){
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        bool operator>(const Distance& d){
            Distance dist;
            if (dist.yards > d.yards){
                if (dist.feet > d.feet){
                    if (dist.inches > d.inches){
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
};

int main(){
    Distance d1(1, 2, 3);
    Distance d2(4, 5, 6);
    Distance d3;
    d3 = d1+d2;
    d3 = d2-d1;
    if (d2 > d1) {
        cout << "d2 is greater\n";
    } else {
        cout << "d1 is greater\n";
    }
    if (d2 < d1) {
        cout << "d2 is greater\n";
    } else {
        cout << "d1 is greater\n";
    }
}
