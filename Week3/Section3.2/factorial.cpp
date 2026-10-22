#include <iostream>

int main(){
    int n, output = 1;

    std::cin >> n;

    for (int i = 1; i <= n; i++){
        output = output * i;
    }

    std::cout << output << std::endl;
}