#include <iostream>

void swapper(int& n1, int& n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    int a, b;

    using namespace std;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "You entered: " << endl;
    cout << "Number 1: " << a << endl;
    cout << "Number 2: " << b << endl;

    swapper(a, b);

    cout << "After swapping: " << endl;
    cout << "Number 1: " << a << endl;
    cout << "Number 2: " << b << endl;
}