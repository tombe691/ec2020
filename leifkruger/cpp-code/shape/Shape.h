/*
*******************************************************************************
FILENAME		Shape.h

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

#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H

#include <string>

using namespace std;

class Shape {
private:
    string color;
public:
    virtual double getArea();
    virtual double getVolume();
    virtual void setInput();
    virtual void printArea();
    virtual void printVolume();
};


#endif //SHAPE_SHAPE_H
