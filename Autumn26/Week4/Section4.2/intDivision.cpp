#include <iostream>

void divider (int &a, int &b){
    int v1 = a;
    int v2 = b;

    a = v1 / v2;
    b = v1 % v2;
}

int main(){
    int a, b;

    std::cin >> a >> b;

    divider(a, b);

    std::cout << "Integer division result: " << a << std::endl;
    std::cout << "Remainder: " << b << std::endl;
}