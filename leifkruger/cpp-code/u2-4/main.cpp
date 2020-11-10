/*
*******************************************************************************
FILENAME		u2-4.cpp

Encoding		UTF-8

DESCRIPTION		Generate different output, int, aritmetic and dec.

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
#include <iomanip>

using namespace std;

const int NUM = 10;

int main() {
    cout << setw(6) << NUM << "\n";
    int x = NUM * 2;
    cout << setw(6) << x << "\n";
    cout << setw(6) << --x << "\n";
    return 0;
}