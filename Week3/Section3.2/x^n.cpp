#include <iostream>

int main(){
    int x, n, output = 1;

    std::cin >> x >> n;

    for (int i = 0; i < n; i++){
        output = output * x;
    }

    std::cout << output << std::endl;
}