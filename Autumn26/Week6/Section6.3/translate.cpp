#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int openerror (const std::ifstream& filename){
    if (!filename.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}

int openerror (const std::ofstream& filename){
    if (!filename.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}

int search_vector(const std::vector<std::string>& vin, std::string text){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == text){
            return i;
        }
    }
    return -1;
}

void translator(const std::vector<std::string>& vin, const std::vector<std::string>& words, const std::vector<std::string>& meaning, std::vector<std::string>& vout){
    for (int i = 0; i < vin.size(); i++){
        int index = search_vector(words, vin[i]);
        if (index != -1){
            vout.push_back(meaning[index]);
        }
        else{
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::ifstream infile1, infile2;
    std::ofstream outfile;
    std::string name1, name2, name3;
    std::vector<std::string> vin, words, meaning, vout;

    std::cout << "Enter file name 1: ";
    std::cin >> name1;

    std::cout << "Enter file name 2: ";
    std::cin >> name2;

    infile1.open(name1);
    infile2.open(name2);

    openerror(infile1);
    openerror(infile2);

    std::string tmp, tmp0;
    while (infile1 >> tmp){
        vin.push_back(tmp);
    }

    while (infile2 >> tmp >> tmp0){
        words.push_back(tmp);
        meaning.push_back(tmp0);
    }

    infile1.close();
    infile2.close();

    std::cout << "Where do you want the translated message outputted?" << std::endl;
    std::cin >> name3;

    outfile.open(name3);
    openerror(outfile);

    translator(vin, words, meaning, vout);

    for (int i = 0; i < vout.size(); i++){
        outfile << vout[i] << " ";
    }

    outfile.close();

}