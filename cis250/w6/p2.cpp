#include <iostream>
using namespace std;

class date{
    protected:
        int month, day, year;
    public:
        date(){
            month = 0;
            day = 0;
            year = 0;
        }
        date(int m, int d, int y){
            month = m;
            day = d;
            year = y;
        }
        void setMonth(int m){
            month = m;
        }
        void setDay(int d){
            day = d;
        }
        void setYear(int y){
            year = y;
        }
        int getMonth(){
            cout << "Month: " << month << endl;
            return month;
        }
        int getDay(){
            cout << "Day: " << day << endl;
            return day;
        }
        int getYear(){
            cout << "Year: " << year << endl;
            return year;
        }
        void getDate(){
            cout << "Date: " << month << "/" << day << "/" << year << endl;
        }
};

class person{
    protected:
        string firstname, lastname;
        date dob;
    public:
        person(){
            firstname = "";
            lastname = "";
        }
        person(string fn, string ln, int m, int d, int y){
            firstname = fn;
            lastname = ln;
            dob.setMonth(m);
            dob.setDay(d);
            dob.setYear(y);
        }
        void setFn(string in){
            firstname = in;
        }
        void setLn(string in){
            lastname = in;
        }
        string getFn(){
            cout << "First name: " << firstname << endl;
            return firstname;
        }
        string getLn(){
            cout << "Last name: " << lastname << endl;
            return lastname;
        }
        void getDob(){
            dob.getDate();
        }

};

int main(){
    person pA;
    person pB("John", "Doe", 1, 23, 1999);

    pA.setFn("Sean");
    pA.setLn("Duarte");

    pA.getFn();
    pA.getLn();
    pA.getDob();
    pB.getFn();
    pB.getLn();
    pB.getDob();
}
