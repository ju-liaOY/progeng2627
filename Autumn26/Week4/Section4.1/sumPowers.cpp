#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    int x, n;

    cout << "Enter the base and power: ";
    cin >> x >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++){
        sum += pow(x, i);
    }

    cout << "Your result: " << sum << endl;
}