#include <iostream>

double pow(double base, int exp){
    double result = 1;

    if (exp >= 0){
        for (int i = 1; i <= exp; i++){
            result = result * base;
        }
    }

    else{
        for (int i = -1; i >= exp; i--){
            result = result / base;
        }
    }
    return result;
}

int main(){
    using namespace std;

    int x, n;

    cout << "Enter the base and power: ";
    cin >> x >> n;

    double sum = 0;

    if (n >= 0){
        for (int i = 1; i <= n; i++){
            sum += pow(x, i);
        }
    }

    else{
        for (int i = 1; i >= n; i--){
            sum += pow(x, i);
        }
    }
    cout << "Your result: " << sum << endl;
}