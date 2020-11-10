/*
*******************************************************************************
FILENAME		sphere.cpp

Encoding		UTF-8

DESCRIPTION		Calculate sphere volume and area.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-10		LK	Start date
*******************************************************************************
*/

#include <iostream>
#include <cmath>
#include "sphereclass.h"

using namespace std;

int main()
{
    char chooseRunagain;
    sphere newSphere;
    do {
        double radius = 0; //Variable
        cout << endl;
        cout << "This program calculate volume and area of a sphere" << endl;
        cout << "==================================================" << endl;
        cout << "Enter Radius? ";
        while (!(cin >> radius)) {
            cout << "ERROR: a number must be entered: "; // Explain error
            cin.clear(); // Clear input stream
            cin.ignore(100, '\n'); // Discard previous input
        }
        if (radius < 0) {
            radius = fabs(radius);
            cout << endl;
            cout << "Note! Negative radius value is not possible to calculate, "
                << "so it's modified to a positive number instead." << endl;
        }
        newSphere.setRadius(radius);    //Save value of radius in object
        cout << endl;
        newSphere.getVolume();          //Show calculation of volume
        newSphere.getArea();            //Show calculation of area
        cout << endl;
        cout << "One more calculation? Enter one character except q (q = quit)"
			<< ", ENTER ";
        cin >> chooseRunagain;
        cin.clear();
    } while (chooseRunagain != 'q');
    cin.clear();
    cout << endl;
    return 0;
}