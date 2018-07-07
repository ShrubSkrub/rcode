#include <iostream>
using namespace std;

class Watch{

    public:
        Watch(int, int, int);
        Watch() {
            hour_ = 0;
            minute_ = 0;
            second_ = 0;
        }
        int hour() {
            return hour_;
        }
        int minute() {
            return minute_;
        }
        int second() {
            return second_;
        }
        void tick();
        void reset(int a, int b, int c) {
            hour_ = a;
            minute_ = b;
            second_ = c;
        }
    private:
        int hour_;
        int minute_;
        int second_;
};

int main(){
    Watch *myWatch;
    myWatch = new Watch;
    myWatch->reset(12, 30, 0);
    cout << myWatch->hour() << ":" << myWatch->minute() << ":" << myWatch->second();

    return 0;
}
