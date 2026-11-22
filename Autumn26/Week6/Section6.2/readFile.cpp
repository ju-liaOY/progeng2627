#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::string inputfilename;
    std::cout << "Enter input file name: ";
    std::cin >> inputfilename;

    std::ifstream ifile;
    ifile.open(inputfilename);

    std::vector<int> v;

    if(!ifile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while (ifile >> tmp){
        v.push_back(tmp);
    }

    ifile.close();

    std::ofstream outfile;
    outfile.open("output.txt");

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = v.size()-1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

    outfile.close();
}