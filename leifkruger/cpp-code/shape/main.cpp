/*
*******************************************************************************
FILENAME		main.cpp

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
#include "Cone.h"
#include "Sphere.h"

int main() {
    string option;
    cout << "\nCalculate volume and area" << endl;
    cout << "=========================" << endl;
    cout << "Which shape? Box (b), Cone (c) Sphere (s) or Quit (q)? ";
    cin >> option;

    if (option == "b") {
        Box box;
        box.setInput();
        box.printArea();
        box.printVolume();
    } else if (option == "c") {
        Cone cone;
        cone.setInput();
        cone.printArea();
        cone.printVolume();
    } else if (option == "s") {
        Sphere sphere;
        sphere.setInput();
        sphere.printArea();
        sphere.printVolume();
    } else if (option == "q") {
        return 0;
    } else {
        cout << "You must enter 'b', 'c', 's' or 'q' (quit)" << endl;
        main();
        return 0;
    }
}
