#include <iostream>

int main(){
    int n;
    bool prime = true;

    std::cout << "Enter an integer greater than 1: ";
    std::cin >> n;

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ 

            prime = false;
        }
        if (not prime){
            cf = n;
        }
    }

    if (prime){
        std::cout << "The number is prime." << std::endl;
    }
    else{
        std::cout << "The number is not prime." << std::endl;
    }
    
}