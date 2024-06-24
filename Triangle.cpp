#include <iostream>

int base = 10;
int height = 7;
int hypotenuse = 12;
int area;
int perimeter;

int main() {
    perimeter = base + height + hypotenuse;
    std::cout << "The perimeter of the triangle is: " << perimeter << std::endl;
    
    area = 0.5 * base * height;
    std::cout << "The area of the triangle is: " << area << std::endl;
    
    return 0;
}