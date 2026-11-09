#include <iostream>
#include <vector>

void f(std::vector<int>& v){
    v.push_back(v.size());
}

int main(){
    std::vector<int> v1;
    for(int i = 1; i < 4; i++){
        f(v1);
    }
    std::cout << v1[v1.size() - 1] << std::endl;
}