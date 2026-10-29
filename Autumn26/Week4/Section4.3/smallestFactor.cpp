#include <iostream>

int smallest_factor(int n){
    for (int i = 2; i < n; i++){
        if ((n % i) == 0){
            return i;
        }
    }

    return 0;

}

int main(){
    int x;

    using namespace std;

    cin >> x;

    int factor = smallest_factor(x);

    if (factor == 0){
        cout << x << " is prime";
    }
    else{
        cout << "The smallest factor of " << x << " is " << factor;
    }
}