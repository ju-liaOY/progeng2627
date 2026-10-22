#include <iostream>

int main(){
    int n, counter1 = 0, counter2 = 0;

    std::cin >> n;

    while (counter1 < n){
        while (counter2 < n){
            std::cout << "*";
            counter2 += 1;
        }
        counter1 += 1;
        counter2 = 0;
        std::cout << std::endl;
    }
}