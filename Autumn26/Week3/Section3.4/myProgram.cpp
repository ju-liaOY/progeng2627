#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    using namespace std;

    srand(time(nullptr));

    int number;

    cout << "How many times do you want to play this game?" << endl;
    cin >> number;

    for (int i = 0; i < number; i++){
        int n = rand() % 100 + 1;
        int guess, counter = 1;

        cout << "Guess the generated number: ";
        cin >> guess;

        while (guess != n){
            if (guess > n){
                cout << "Think lower." << endl;
            }
            else{
                cout << "Think higher." << endl;
            }
            cout << "Guess: ";
            cin >> guess;
            counter += 1;
        }
        
        cout << "That's right. You win!" << endl;
        cout << "Number of guesses: " << counter << endl;
    }


}