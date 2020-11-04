/*
*******************************************************************************
FILENAME		uppgift2-2.cpp

Encoding		UTF-8

DESCRIPTION		.

FUNCTIONS

NOTES			Menu language - Swedish

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-03		LK	Start date

*******************************************************************************
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temperatureFahrenheit;
    cout << "Ange temperaturen i Fahrenheit: ";
    cin >> temperatureFahrenheit;
    cout << setw(6) << setprecision(4) << "Temperaturen i celsius är: " << (temperatureFahrenheit-32)*5/9 << "\n";
    return 0;
}