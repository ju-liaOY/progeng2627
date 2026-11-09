#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;

    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0};

    std::cout << "Search for an element: ";
    std::cin >> n;

    int vector = search_vector(n, v);

    if (vector == -1){
        std::cout << "Element not found." << std::endl;
    }
    else{
        std::cout << "Element first found at " << vector << std::endl;
    }
}