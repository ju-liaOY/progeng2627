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

    cout << "Search for number: ";
    cin >> t;
    int counter = 0;
    vector<int> store;

    for (int i = 0; i < n; i++){
        if (v[i] == t){
            counter += 1;
            store.push_back(i);
        }
    }

    if (counter == 0){
        cout << "There are no occurrences of " << t;
    }
    else if (counter == 1){
        cout << "There is 1 occurrence of " << t << " at index" << endl;
        for (int i = 0; i < store.size(); i++){
            cout << i << endl;
        }
    }
    else{
        cout << "There are " << counter << " occurrences of " << t << " at indices" << endl;
        for (int i = 0; i < store.size(); i++){
            cout << i << endl;
        }
    }

}