/*
*******************************************************************************
FILENAME		Cone.h

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

#ifndef SHAPE_CONE_H
#define SHAPE_CONE_H

#include "Shape.h"

class Cone : public Shape {
private:
    double radius;
    double height;
public:
    Cone();
    //Cone(double _height, double _radius);
    double getArea();
    double getVolume();
    void setInput();
    void printArea();
    void printVolume();

};


#endif //SHAPE_CONE_H
