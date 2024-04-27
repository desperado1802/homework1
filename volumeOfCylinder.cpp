#include <iostream>
#include <cmath>


int main(){

    
    double height, radius;

    std::cout << "Enter H - height of cylinder: " << std::endl;
    std::cin >> height;
    std::cout << std::endl;

    std::cout << "Enter R - radius of cylinder: " << std::endl;
    std::cin >> radius;
    std::cout << std::endl;

    std::cout << "The volume of cylinder in m3 is: " << M_PI * pow(radius, 2) * height << std::endl;


    return 0;
}