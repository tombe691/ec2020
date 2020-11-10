/*
*******************************************************************************
FILENAME		uppgift4-4.cpp

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

using namespace std;

int main() {
    int multiplikationsTabell;
    cout << "Upp till vilken multiplikationstabell önskas? (ange heltal): ";
    cin >> multiplikationsTabell;

    for (int i=1; i <= multiplikationsTabell; i++)
    {
        for (int j=1; j <= i; j++)
        {
            cout << i*j << " ";
        }
        cout << "\n";
    }
    return 0;
}