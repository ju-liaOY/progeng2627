#include <iostream>
#include <vector>

int main(){
    using namespace std;

    vector<int> number;

    number.push_back(6);
    number.push_back(7);
    number.push_back(8);

    cout << number[0] * (number[1] + number[2]);
}