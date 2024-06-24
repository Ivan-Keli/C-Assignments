#include <iostream>

int sellingprice;
int buyingprice;
float profitPercentage;

int main() {
    std::cout << "Enter the selling price of the vehicle: " << std::endl;
    std::cin >> sellingprice;
    
    std::cout << "Enter the buying price of the vehicle: " << std::endl;
    std::cin >> buyingprice;
    
    profitPercentage = ((sellingprice - buyingprice) / static_cast<float>(buyingprice)) * 100;
    
    std::cout << "The profit percentage is: " << profitPercentage << "%" << std::endl;

    return 0;
}