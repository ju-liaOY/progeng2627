#include <iostream>

double myabs(double n);

int main(){
    double x;

    using namespace std;

    cout << "Enter a number: ";
    cin >> x;
    cout << "|" << x << "| = " << myabs(x) << endl;
}

double myabs(double n){
    double abs;

    if (n < 0){
        abs = -n;
    }
    else{
        abs = n;
    }

    return abs;
}