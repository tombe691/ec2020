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
		2			2020-11-12		LK	Change use of i and start with index 0
*******************************************************************************
*/

#include <iostream>
#include "ovning_kap6_4_class.h"

using namespace std;

int main() {
    employee employer[3]; 
    float tempCompensation;
    cout << endl;
    cout << "Employer " << endl;
    cout << "========" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Employer nr: " << i+1 << endl;
        cout << "Enter compensation: ";
        cin >> tempCompensation;
        employer[i].setId(i);
        employer[i].setCompensation(tempCompensation);
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Employee nr: " << i+1 << " has compensation " << employer[i].getCompensation() << endl;
    }
    cout << endl;
    return 0;
}