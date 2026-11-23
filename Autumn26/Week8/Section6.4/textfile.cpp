#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(int argc, char* argv[]){

    if (argc > 3){
        std::cout << "Please enter the name without spaces.";
        return EXIT_FAILURE;
    }

    std::ifstream infile;

    infile.open(argv[2]);

    if (!infile.is_open()){
        std::cout << "Error opening file.";
        return EXIT_FAILURE;
    }

    std::string tmp;

    while (infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();

}