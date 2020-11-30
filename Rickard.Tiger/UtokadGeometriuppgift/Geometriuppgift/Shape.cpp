/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Shape.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
// Including to get the declarations.
#include "Shape.h"
#include <iostream>
// //Constructor to get the private variables
Shape::Shape(std::string _color) : color(_color){}
// Ground  method that will be overridden.
void Shape::getVolume()
{
}
// Ground  method that will be overridden.
void Shape::getArea()
{
}
// Method to get the color a string, this will not be initialized in other classes
// Since it is Inherit the method.
void Shape::getColor()
{
    std::cout << "Color is: " << color << std::endl;
}