/*
*******************************************************************************
FILENAME		Shape.cpp

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
#include "Shape.h"
Shape::Shape(std::string _color) : color(_color) {}

double Shape::getArea() {
    return 0;
}

double Shape::getVolume() {
    return 0;
}

void Shape::setInput() {
}

void Shape::printArea() {
}

void Shape::printVolume() {
}

void Shape::getColor() {
    std::cout << "Color is: " << color << std::endl;
}