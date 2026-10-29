#include <iostream>
#include <string>

using namespace std;

void swapper(string& s1, string& s2){
    string tmp = s1;
    s1 = s2;
    s2 = tmp;
}

int main(){
    string a, b;

    using namespace std;

    cout << "Enter two words: ";
    cin >> a >> b;

    cout << "You entered: " << endl;
    cout << "Word 1: " << a << endl;
    cout << "Word 2: " << b << endl;

    swapper(a, b);

    cout << "After swapping: " << endl;
    cout << "Word 1: " << a << endl;
    cout << "Word 2: " << b << endl;
}