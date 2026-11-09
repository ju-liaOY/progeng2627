#include <iostream>
#include <vector>

int main(){
    int n, t, tmp;
    using namespace std;
    vector<int> v;

    cout << "List length: ";
    cin >> n;

    cout << "Enter the list here:" << endl;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    cout << "Filter value: ";
    cin >> t;

    cout << "Listed numbers bigger than " << t  << ":" << endl;
    for (int i = 0; i < n; i++){
        if (v[i] < t){
            cout << v[i] << endl;
        }
    }

}