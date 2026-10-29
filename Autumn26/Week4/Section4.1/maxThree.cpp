#include <iostream>

int compare(int a, int b, int c){
    if ((a >= b) && (a >= c)){
        return a;
    }
    
    if ((b >= c) && (b >= a)){
        return b;
    }

    return c;
}

int main(){
    using namespace std;

    int x, y, z;

    cin >> x >> y >> z;

    cout << compare(x,y,z) << endl;
}