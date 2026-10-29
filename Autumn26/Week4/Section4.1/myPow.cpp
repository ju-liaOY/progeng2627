#include <iostream>

double pow(double base, int exp){
    double result = 1;

    if (exp >= 0){
        for (int i = 1; i <= exp; i++){
            result = result * base;
        }
    } 
    
    else{
        for (int i = -1; i >= exp; i--){
            result = result / base;
        }
    }
    return result;
}

int main(){
    std::cout << "2^3: " << pow(2, 3) << std::endl;
    std::cout << "0.5^2: " << pow(0.5, 2) << std::endl;
    std::cout << "1^0: " << pow(1, 0) << std::endl;
    std::cout << "2^-3: " << pow(2, -3) << std::endl;
    std::cout << "4^-4: " << pow(4, -4) << std::endl;
}