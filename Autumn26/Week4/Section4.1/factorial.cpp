#include <iostream>

int myfactorial(int in){
    int factorial = 1;

    for (int i = 1; i <= in; i++){
        factorial *= i;
    }

    return factorial;
}

int main(){
    int n;
    
    using namespace std;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " : " << myfactorial(n) << endl;
}