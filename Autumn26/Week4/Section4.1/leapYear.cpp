#include <iostream>

bool leap_year (int year){
    bool leapYear;

    if (year % 4 == 0){
        if (year % 100 == 0) {
            if (year % 400 == 0){
                leapYear = true;
            }
            else{
                leapYear = false;
            }
        }
        else{
            leapYear = true;
        }
    }

    return leapYear;

}

int main(){
    using namespace std;

    cout << (leap_year(1600) == true) << endl;
    cout << (leap_year(1700) == false) << endl;
    cout << (leap_year(1800) == false) << endl;
    cout << (leap_year(1900) == false) << endl;
    cout << (leap_year(2000) == true) << endl;
    cout << (leap_year(2100) == false) << endl;
    cout << (leap_year(2200) == false) << endl;
    cout << (leap_year(2300) == false) << endl;
    cout << (leap_year(2400) == true) << endl;
    cout << (leap_year(2500) == false) << endl;
    cout << (leap_year(2600) == false) << endl;
    cout << (leap_year(2700) == false) << endl;
    cout << (leap_year(2800) == true) << endl;
    cout << (leap_year(2900) == false) << endl;
    cout << (leap_year(3000) == false) << endl;
}