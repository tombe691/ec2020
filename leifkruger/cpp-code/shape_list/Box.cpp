/*
*******************************************************************************
FILENAME		Box.cpp

Encoding		UTF-8

DESCRIPTION		Calculate volume and area of different shapes.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-21		LK	Start date
*******************************************************************************
*/

#include <iostream>
#include "Box.h"


//Box::Box() {}

Box::Box(std::string _color, double _height, double _length, double _width)
: Shape(_color), height(_height), length(_length), width(_width) {}

double Box::getArea() {
    return 2 * (length * height + length * width + width * height);
}

double Box::getVolume() {
    return height * length * width;
}

void Box::setInput() {
    std::cout << "Height: ? ";
    std::cin >> height;
    std::cout << "Length: ? ";
    std::cin >> length;
    std::cout << "Width: ? ";
    std::cin >> width;
}

void Box::printArea() {
    cout << "The Box area is: " << getArea() << endl;
}

void Box::printVolume() {
    cout << "The Box volume is: " << getVolume() << endl;
}