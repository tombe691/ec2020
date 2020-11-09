/*
*******************************************************************************
FILENAME		uppgift3-4.cpp

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
    long long int pin, restPin; /* pin = personal identification number */
    int sex;

    cout << "Detta program kontrollerar enbart om siffran för kön i ett "
            "personnummer är gilltigt.\n "
            "Börja med att ange om personnumret tillhör en kvinna, ange 0 (nolla), "
            "tillhör det en man, ange 1 (etta). ";
    cin >> sex;
    cout << "Ange tiosiffrigt personnummer, utan bindestreck, som skall kontrolleras! ";
    cin >> pin;

    /* Kontrollera om angivet kön 0 eller 1. */
    if ((sex == 0) || sex == 1)
    {
        /* Ta fram siffra nio som anger kvinna jämn siffra, man udda siffra */
        /* Börja med att ta bort sista siffran som är en kontrollsiffra */
        restPin = pin / 10;
        /* Kontroll av siffra för kön kontra personnummer */
        /* Är sista siffran delbar med 2 utan rest innebär det jämn siffra annars udda. */
        if (((restPin % 2 == 0) && (sex == 0)) || ((restPin % 2 != 0) && (sex == 1)))
        {
            cout << "Stämmer";
        } else {
            cout << "Stämmer inte";
        }
    } else {
        cout << "Kön ej angivet korrekt. Kontrollera inmatning och kör programmet en gång till.";
    }
    return 0;
}
