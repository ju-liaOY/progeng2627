#include <iostream>

int main(){
    int n;
    int sum = 0;

    using namespace std;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0){
        sum = sum + n;
        cout << "The sum so far is: " << sum << endl;
        cout << "Enter a number: ";
        cin >> n;
    }
}