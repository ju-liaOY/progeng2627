#include <iostream>

int main(){
    double weight, height, bmi; //initialisation for BMI calculator

    using namespace std;

    cout << "Enter your weight [kg]: ";
    cin >> weight;
    cout << "Enter your height [m]: ";
    cin >> height;

    bmi = weight / (height*height);

    cout << "Your BMI is " << bmi << endl;


}