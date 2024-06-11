#include <iostream>
using namespace std;

float Length;
float Width;
float Area;

int main () {
    cout << "Enter length of the rectangle: " << endl;
    cin >> Length;
    cout << "Enter width of the rectangle: " << endl;
    cin >> Width;
    Area = Length * Width;
    cout << "The area of the rectangle is: " << Area << endl;
}