#include <iostream>

int main(){
    int n, steps = 0, max;

    std::cin >> n;
    max = n;

    while (n != 1){
        if (n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        if (n > max){
            max = n;
        }
        std::cout << n << "\t";
        steps += 1;
    }
    std::cout << std::endl;
    std::cout << "Maximum number generated: " << max << std::endl;
    std::cout << "Number of steps: " << steps << std::endl;
}