#include <iostream>

bool prime(int n){
    bool prime = true;
    for (int i = 2; i < n; i++){
        if ((n % i) == 0){
            prime = false;
        }
    }

    return prime;
}

int main(){
    int x, y;

    using namespace std;

    cout << "Enter two integers greater than 1 and such that the second integer is greater than the first one: ";
    cin >> x >> y;

    while ((x > y) || (x + y <= 2)){
        cout << "Enter two integers greater than 1 and such that the second integer is greater than the first one: ";
        cin >> x >> y;
    }

    for (int i = x; i <= y; i++){
        if (prime(i)){
            cout << i << endl;
        }
    }
}