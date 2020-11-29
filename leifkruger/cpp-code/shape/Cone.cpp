/*
*******************************************************************************
FILENAME		Cone.cpp

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
#include "Cone.h"

Cone::Cone() {}
Cone::Cone(double _height, double _radius) : height (_height), radius (_radius) {}

double Cone::getArea() {
    return (M_PI * radius *
    (radius + sqrt(pow(height, 2) + pow(radius, 2))));
}

double Cone::getVolume() {
    return (M_PI * radius * radius * height)/3;
}

void Cone::setInput() {
    cout << "Height: ? ";
    cin >> height;
    cout << "Radius: ? ";
    cin >> radius;
}
void Cone::printArea() {
    cout << "The area is: " << getArea() << endl;
}
void Cone::printVolume() {
    cout << "The volume is: " << getVolume() << endl;
}