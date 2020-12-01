/*
*******************************************************************************
FILENAME		Sphere.cpp

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
#include <cmath>
#include "Sphere.h"

//Sphere::Sphere() {}
Sphere::Sphere(std::string _color, double _radius)
: Shape(_color), radius(_radius) {}

double Sphere::getArea() {
    return 4 * M_PI * radius * radius;
}

double Sphere::getVolume() {
    return (4 * M_PI * radius * radius * radius)/3;
}

void Sphere::setInput() {
    cout << "Radius: ? ";
    cin >> radius;
}
void Sphere::printArea() {
    cout << "The Sphere area is: " << getArea() << endl;
}
void Sphere::printVolume() {
    cout << "The Sphere volume is: " << getVolume() << endl;
}