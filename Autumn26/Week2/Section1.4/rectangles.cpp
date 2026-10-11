#include <iostream>

int main(){
    int s1, s2, perimeter, area;

    using namespace std;

    cout << "Enter length of rectangle: ";
    cin >> s1;
    cout << "Enter width of rectangle: ";
    cin >> s2;

    perimeter = s1 * 2 + s2 * 2;
    area = s1 * s2;

    cout << "Perimeter of rectangle: " << perimeter << endl;
    cout << "Area of rectangle: " << area << endl;

}