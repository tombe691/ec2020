/*
*******************************************************************************
FILENAME		main.cpp

Encoding		UTF-8

DESCRIPTION		Calculate volume and area of different shapes.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++20 (g++ by default uses option '-std=gnu++20')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-22		LK	Start date
		2           2020-11-29      LK  Add list functionality
*******************************************************************************
*/

#include <list>
#include <iostream>
#include "Box.h"
#include "Cone.h"
#include "Sphere.h"
#include "Shape.h"

int main() {

    Shape* pBox = new Box("Röd", 5, 10, 11);
    Shape* pCone = new Cone("Blå", 12, 1);
    Shape* pSphere = new class Sphere("Green", 2.45);
    std::list<Shape*> myList;
    myList.push_back(pBox);
    myList.push_back(pCone);
    myList.push_back(pSphere);
    for (auto* unit : myList) {
        unit->getColor();
        unit->printVolume();
        unit->printArea();
        cout << "-----------" << endl;
    }
    delete pBox;
    delete pCone;
    delete pSphere;
    return 0;
}
