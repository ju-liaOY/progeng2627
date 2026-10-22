#include <iostream>

int main(){
    int n, curmax, curmin;

    using namespace std;

    cout << "Enter a number: ";
    cin >> n;

    curmax = n;
    curmin = n;

    cout << "Maximum so far: " << curmax << endl;
    cout << "Minimum so far: " << curmin << endl;

    while (n != 0){
        cout << "Enter a number: ";
        cin >> n;

        if (n > curmax){
            curmax = n;
        }
        if (n < curmin){
            curmin = n;
        }
        cout << "Maximum so far: " << curmax << endl;
        cout << "Minimum so far: " << curmin << endl;
    }
}