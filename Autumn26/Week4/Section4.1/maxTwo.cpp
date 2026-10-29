#include <iostream>

int compare(int a, int b){
    if (a >= b){
        return a;
    }
    return b;
}

int main(){
    int x, y;

    using namespace std;

    cin >> x >> y;

    cout << compare(x, y) << endl;
}