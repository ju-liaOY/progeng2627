#include <iostream>
#include <vector>

using namespace std;

double sum(const vector<double>& vin){
    double total = 0;

    for (int i = 0; i < vin.size(); i++){
        total = total + vin[i];
    }

    return total;
}

int main(){
    vector<double> v;
    int n, input;

    cout << "How many numbers do you want to add?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter a number: ";
        cin >> input;
        v.push_back(input);
    }
    cout << "The sum is "<< sum(v) << ".";
}