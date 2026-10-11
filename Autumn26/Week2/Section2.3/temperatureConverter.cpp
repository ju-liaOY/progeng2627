#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;

    using namespace std;
    string unit_in, unit_out;

    cin >> temp_in >> unit_in;

    bool unit_check = true;

    if ((unit_in == "C") || (unit_in == "c")){
        temp_out = temp_in * 9/5 + 32;
        unit_out = "F";
    }
    else if ((unit_in == "F") || (unit_in == "f")){
        temp_out = (temp_in - 32) * 5/9;
        unit_out = "C";
    }
    else{
        unit_check = false;
    }

    if (unit_check){
        cout << temp_out << " " << unit_out;
    }
    else{
        cout << "Error, unit not recognised.";
    }
}
