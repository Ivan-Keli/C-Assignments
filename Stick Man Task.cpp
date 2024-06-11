#include <iostream>
#include <string>

int main() {
    std::string man_woman_holding_hands_car_ground = R"(
        O      O         ---------
       /|\   /<| \  |---/         \----|
       / \    / \   |------------------|
       "_____________________________";
    )";


    // Print stick figures and car
    std::cout << "Man and Woman Holding Hands Next to Car on Level Ground" << std::endl;
    std::cout << man_woman_holding_hands_car_ground;

    return 0;
}
