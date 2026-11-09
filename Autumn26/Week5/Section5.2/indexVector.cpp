#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int vector = 0;

    if (vin.size() != 0){
        int minimum = vin[0];
        for (int i = 0; i < vin.size(); i++){
            if (vin[i] < minimum){
                minimum = vin[i];
                vector = i;
            }
        }
    }
    else{
        vector = -1;
    }

    return vector;
}

int main(){
    std::vector<double> v{-1, -2, -3};
    
    std::cout << "Index of the smallest value: " << min_vector_element(v);
}