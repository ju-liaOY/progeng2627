#include <iostream>
#include <string>

int main() {
    using std::cout;

    std::string user_name;
    cout << "What is your name?" << std ::endl;
    std::cin >> user_name;
    cout << "Hey there, " << user_name << "!!!" << std::endl;
}