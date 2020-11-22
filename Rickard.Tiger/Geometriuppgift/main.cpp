/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : main.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Declaring include and Header files dont need shape cause shape is in box, sphere and cone.h
#include <iostream>
#include "Box.h"
#include "Sphere.h"
#include "Cone.h"

int main() {
    // Calling to class Box, and sets the values.
    Box box("Red", 10, 20, 30);
    std::cout << "          BOX!        " << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Volume of a box is : " << box.getVolume() <<std::endl; // name.method to call the method.
    std::cout << "Area of box is : " << box.getArea() << std::endl;
    std::cout << "The Color is: " << box.getColor() << "\n" << std::endl;
    // Calling to class Sphere, and sets the values.
    Sphere sphere("Blue", 5);
    std::cout << "          SPHERE!        " << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Volume of Sphere is: " << sphere.getVolume() << std::endl;
    std::cout << "Area of Sphere is: " << sphere.getArea() << std::endl;
    std::cout << "The Color is: " << sphere.getColor() << "\n" <<std::endl;
    // Calling to class Cone, and sets the values.
    Cone cone("Green", 5, 10);
    std::cout << "          CONE!        " << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Volume of a Cone is: " << cone.getVolume() << std::endl;
    std::cout << "TotalArea of Cone is: " << cone.getTotalArea() << std::endl;
    std::cout << "The Color is: " << cone.getColor() << "\n" << std::endl;
    return 0;
}
