#include <iostream>

int main(){
    int n, rem;

    using namespace std;

    cout << "Please enter a number:" << endl;
    cin >> n;

    rem = n % 2;

    cout << "In the following line, 0 means even and 1 means odd." << endl;
    cout << rem << endl;
}