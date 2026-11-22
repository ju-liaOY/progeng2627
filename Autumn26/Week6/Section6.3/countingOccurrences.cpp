#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void counting(const std::vector<std::string>& vin, const std::string& text, std::vector<int>& vout){
    int counter = 0;

    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == text){
            counter++;
        }
    }

    vout.push_back(counter);

}

int main(){
    std::ifstream infile1, infile2;
    std::ofstream outfile;

    std::vector<std::string> textVector, wordsVector;
    std::vector<int> counts;

    infile1.open("text.txt");
    infile2.open("words.txt");

    if (!infile1.is_open() || !infile2.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while (infile1 >> tmp){
        textVector.push_back(tmp);
    }
    while (infile2 >> tmp){
        wordsVector.push_back(tmp);
    }

    infile1.close();
    infile2.close();

    for (int i = 0; i < wordsVector.size(); i++){
        counting(textVector, wordsVector[i], counts);
    }

    std::string outfileName;

    std::cout << "Where do you want the results output?" << std::endl;
    std::cin >> outfileName;

    outfile.open(outfileName);
    
    if (!outfile.is_open()){
        std::cout << "Error opening file." << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < wordsVector.size(); i++){
        outfile << wordsVector[i] << ": " << counts[i] << std::endl;
    }

    outfile.close();

}