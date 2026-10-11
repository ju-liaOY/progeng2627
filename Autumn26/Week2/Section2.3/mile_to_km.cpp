#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    using namespace std;
    string unit_in, unit_out;

    const double mile_to_km = 1.609;

    cin >> length_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "miles";
        length_out = length_in / mile_to_km;
    }
    else if ( (unit_in == "mile") || (unit_in == "miles")){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        cout << length_out << " " << unit_out << endl;
    }
    else{
        cout << "Error, unit not recognised." << endl;
    }
}