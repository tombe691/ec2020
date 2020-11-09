/*
*******************************************************************************
FILENAME		u2-2.cpp

Encoding		UTF-8

DESCRIPTION		Generates a table.

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

int main() {
    int numbers[4][2] = {	{ 1990, 135},
                             { 1991, 7290},
                             { 1992, 11300},
                             { 1993, 16200}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << setw(6) << numbers[i][j];
        }
        cout << "\n";
    }
    return 0;
}