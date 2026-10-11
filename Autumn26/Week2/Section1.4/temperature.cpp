#include <iostream>

int main (){
    double celsius, farenheit; //initialises user input (Celsius) and farenheit value
    
    using namespace std;
    cout << "Input temperature in Celsius: ";
    cin >> celsius;

    farenheit = (celsius * 9/5) + 32;

    cout << "Temperature is " << farenheit << " degrees Farenheit.";
}