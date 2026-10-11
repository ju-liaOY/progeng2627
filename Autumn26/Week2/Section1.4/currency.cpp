#include <iostream>

int main(){
    double gbp, exchange, euros; //initialises variables for GBP , EUR amounts and exchange rate to Euros

    using namespace std;

    cout << "Input the GBP amount: ";
    cin >> gbp;
    cout << "Input the currency exchange to Euros: ";
    cin >> exchange;

    euros = gbp * exchange;

    cout << "This is EUR" << euros << "." << endl;



}