#include <iostream>

bool leap_year(int year){
    bool ly;

    if (year % 4 == 0){
        if (year % 100 == 0) {
            if (year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }

    else{
        ly = false;
    }

    return ly;
}

int total_days (int month, int year){
    bool leap = leap_year(year); // checks if year is leap year

    switch (month){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            return 31;
        case 4 : case 6 : case 9 : case 11:
            return 30;
        
        case 2 :
            if (leap){
                return 29;
            }
            else{
                return 28;
            }
    }

    return 0;
}

void next_date (int d1, int m1, int y1, int &d2, int &m2, int &y2){
    int last_day = total_days(m1, y1);

    if (d1 == last_day){ // changes to 1st day of following month
        d2 = 1;
        if (m1 == 12){ // changes to 1st day of following year
            m2 = 1;
            y2 = y1 + 1;
        }
        else{
            m2 = m1 + 1;
            y2 = y1;
        }
    }
    else{
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }


}

int main(){
    int d1, m1, y1, d2 = 0, m2 = 0, y2 = 0;

    using namespace std;

    cout << "Enter a date in the format DD MM YYYY: ";
    cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);
    
    cout << "The next date is: " << d2 << " " << m2 << " " << y2;
}