/*
*******************************************************************************
FILENAME		u2-1.cpp

Encoding		UTF-8

DESCRIPTION		Convert gallons to cubic feet.

FUNCTIONS

NOTES			Menu language - Swedish

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-02		LK	Start date

*******************************************************************************
*/

#include <iostream>

using namespace std;

int main() {
    double numberOfGallons;
    cout << "Hello User, enter a number of gallons: ";
    cin >> numberOfGallons;
    numberOfGallons *= 0.133681;
    cout << "In cubic feet it is: " << numberOfGallons;
    return 0;
}