#include <iostream>

int main(){
    int n, divisor, quotient = 0;

    using namespace std;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter a divisor: ";
    cin >> divisor;

    cout << n << " / " << divisor << " = ";

    while (n >= divisor){
        n = n - divisor;
        quotient = quotient + 1;
    }

    cout << quotient << " remainder " << n << endl; 
}