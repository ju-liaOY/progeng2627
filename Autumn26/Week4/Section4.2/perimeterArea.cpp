#include <iostream>

void calculator(int &a, int &b){
    int length = a;
    int width = b;

    a = 2*length + 2*width;
    b = length*width;

}

int main(){
    int s1, s2;;
    
    std::cin >> s1 >> s2;

    calculator(s1, s2);

    std::cout << "Perimeter: " << s1 << std::endl;
    std::cout << "Area: " << s2 << std::endl;



}