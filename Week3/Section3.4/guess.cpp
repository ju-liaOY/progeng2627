#include <iostream>

int main(){
    int n, upper, lower, input;

    using namespace std; 

    cout << "Think of a number." << endl;
    cout << "Upper bound of the range: ";
    cin >> upper;
    cout << "Lower bound of the range: ";
    cin >> lower;

    n = (upper + lower) / 2;

    cout << n << endl;
    cout << "1: this is your number." << endl << "2: this is higher than your number." << endl << "3: this is lower than your number." << endl;
    cout << "Enter your response: ";
    cin >> input;

    while (input != 1){
        if (input == 2){
            upper = n;
        }
        else if (input == 3){
            lower = n;
        }
        else{
            cout << "Invalid input." << endl;
            cout << "1: this is your number." << endl << "2: this is higher than your number." << endl << "3: this is lower than your number." << endl;
            cin >> input;
        }
        n = (upper + lower) / 2;
        cout << n << endl;
        cout << "1: this is your number." << endl << "2: this is higher than your number." << endl << "3: this is lower than your number." << endl;
        cout << "Enter your response: ";
        cin >> input;
    }


    

}