#include <iostream>
#include <cmath>

double calculateLayingCylinderVolume(double r, double h, double length) {
    
    double area = acos((r - h) / r) * r * r - (r - h) * sqrt(2 * r * h - h * h);

    double volume = area * length;

    return volume;
}

int main() {
    double radius, heightFilled, lengthOfCylinder;

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << std::endl;

    std::cout << "Enter the height to which the cylinder is filled: ";
    std::cin >> heightFilled;
    std::cout << std::endl;

    std::cout << "Enter the length of the cylinder: ";
    std::cin >> lengthOfCylinder;
    std::cout << std::endl;

    double volume = calculateLayingCylinderVolume(radius, heightFilled, lengthOfCylinder);
    std::cout << "The volume of the liquid in the cylinder is: " << volume << std::endl;

    return 0;
}
