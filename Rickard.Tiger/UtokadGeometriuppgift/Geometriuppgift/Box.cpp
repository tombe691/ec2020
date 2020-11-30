/*
______________________________________________________________________________________
Date        : 2020-11-22
File        : Box.cpp
Description : Geometric program
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <iostream>
#include "Box.h" // Always big first letter for class.

//Constructor to get the private variables
Box::Box(std::string _color, double _height, double _length, double _width)
: Shape(_color), height(_height), length(_length), width(_width){}

//Overriding method.
void Box::getVolume()
{
    std::cout << "Volume for Box is: " << length * width * height << std::endl;
}
//Overriding method.
void Box::getArea()
{
    std::cout << "Area is for Box: " << (length * width + length * height + width * height) * 2 << std::endl;
}