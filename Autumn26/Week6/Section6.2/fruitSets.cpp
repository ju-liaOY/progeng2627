#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (s == vin[i]){
            return 0;
        }
    }
    return 1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        if (search_vector(vin1[i], vout) == 1){
            vout.push_back(vin1[i]);
        }
    }
    for (int i = 0; i < vin2.size(); i++){
        if (search_vector(vin2[i], vout) == 1){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i = 0; i < vin1.size(); i++){
        if (search_vector(vin1[i], vin2) == 0 && search_vector(vin1[i], vout) == 1){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){
    std::ifstream file1, file2;
    std::string name1, name2;
    std::vector<std::string> v1, v2, unionVector, intersectionVector;

    std::cout << "Input file name 1: ";
    std::cin >> name1;

    std::cout << "Input file name 2: ";
    std::cin >> name2;

    file1.open(name1);
    file2.open(name2);

    if (!file1.is_open() || !file2.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while (file1 >> tmp){
        v1.push_back(tmp);
    }
    while (file2 >> tmp){
        v2.push_back(tmp);
    }

    file1.close();
    file2.close();

    union_vector(v1, v2, unionVector);
    intersection_vector(v1, v2, intersectionVector);

    std::ofstream ofile1, ofile2;
    ofile1.open("union.txt");
    ofile2.open("intersection.txt");

    if (!ofile1.is_open() || !ofile2.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < unionVector.size(); i++){
        ofile1 << unionVector[i] << std::endl;
    }

    for (int i = 0; i < intersectionVector.size(); i++){
        ofile2 << intersectionVector[i] << std::endl;
    }
    
    ofile1.close();
    ofile2.close();
}