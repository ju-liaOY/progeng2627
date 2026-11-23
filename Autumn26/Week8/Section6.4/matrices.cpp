#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector (std::string s){
    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    ss << s;
    while (ss >> tmp){
        out.push_back(std::stod(tmp));
    }

    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){
    std::ifstream infile;
    infile.open(input_file);

    if (!infile.is_open()){
        std::cout << "Error opening file." << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> vout;

    while (std::getline(infile, line)){
        vout.push_back(line_to_vector(line));
    }

    return vout;

}

std::vector<double> get_row
(
    const std::vector<std::vector<double>>& vin, 
    int row_index
)
{
    std::vector<double> row;

    for (int i = 0; i < vin[row_index].size(); i++){
        row.push_back(vin[row_index][i]);
    }

    return row;
}

std::vector<double> get_column
(
    const std::vector<std::vector<double>>& vin, 
    int column_index
)
{
    std::vector<double> column;

    for (int i = 0; i < vin.size(); i++){
        column.push_back(vin[i][column_index]);
    }

    return column;
}

double scalar_product
(
    const std::vector<double>& row, 
    const std::vector<double>& column
)
{
    double result = 0.0;

    for (int i = 0; i < row.size(); i++){
        result += (row[i] * column[i]);
    }

    return result;
}

std::vector<std::vector<double>> 
matrix_product
(
    const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2
)
{ 

    std::vector<std::vector<double>> vout;

    for (int i = 0; i < m1.size(); i++){
        std::vector<double> result_row;
        std::vector<double> row = get_row(m1, i);
        
        for (int j = 0; j < m2[0].size(); j++){
            std::vector<double> column = get_column(m2, j);
            double product = scalar_product(row, column);
            result_row.push_back(product);
        }

        vout.push_back(result_row);
    }
    
    return vout;
}

std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;

    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_product(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}