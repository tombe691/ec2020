/*
*******************************************************************************
FILENAME		ovning_kap6_4.cpp

Encoding		UTF-8

DESCRIPTION		Create an employee class with id and compensation.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-12		LK	Start date
*******************************************************************************
*/

#include <iostream>
#include "ovning_kap6_4_class.h"

using namespace std;

int main() {
    employee employer[4]; //Skip index 0
    float temp;
    cout << endl;
    cout << "Employer " << endl;
    cout << "========" << endl;
    for (int i = 1; i < 4; i++) {
        cout << "Employer nr: " << i << endl;
        cout << "Enter compensation: ";
        cin >> temp;
        employer[i].setId(i);
        employer[i].setCompensation(temp);
    }
    cout << endl;
    for (int i = 1; i < 4; i++) {
        cout << "Employee nr: " << employer[i].getId() << " has compensation " << employer[i].getCompensation() << endl;
    }
    cout << endl;
    return 0;
}