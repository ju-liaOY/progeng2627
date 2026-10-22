#include <iostream>

int main(){
    double avg, n, counter = 0, sum = 0;
    
    using namespace std;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0){
        counter = counter + 1;
        sum = sum + n;
        avg = sum / counter;
        cout << "The average so far is: " << avg << endl;
        cout << "Enter a number: ";
        cin >> n;
    }
}