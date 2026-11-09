#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> v {1, 2, 3, 4, 5, 6, 7};
    int n;
    std::vector<double> vOUT;

    std::cout << "Enter a number: ";
    std::cin >> n;

    filter_v(v, n, vOUT);

    std::cout << "Numbers less than " << n << ":" << std::endl;

    for (int i = 0; i < vOUT.size(); i++){
        std::cout << vOUT[i] << std::endl;
    }

}