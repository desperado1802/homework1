#include <iostream>
#include <cmath>

double calcBodyIndex(double mass, double height, bool nickTreftenFormula = false) {

    if(nickTreftenFormula){

    double division = mass / pow(height, 2.5);

    return 1.3 * division;

    }
   

    return mass / (height * height);

}

int main(){

    double mass, height;

    std::cout << "Enter your mass in kg: ";
    std::cin >> mass;
    std::cout << std::endl;  

    std::cout << "Enter your height in cm: ";
    std::cin >> height;
    std::cout << std::endl;

    height = height / 100;

    std::cout << "Your body mass index is: " << calcBodyIndex(mass, height) << std::endl;

    std::cout << "Your body mass according to Nick Treften index is: " << calcBodyIndex(mass, height, true) << std::endl;


    return 0;
}