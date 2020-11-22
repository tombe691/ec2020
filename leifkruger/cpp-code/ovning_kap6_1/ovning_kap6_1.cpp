/*
*******************************************************************************
FILENAME		ovning_kap6_1.cpp

Encoding		UTF-8

DESCRIPTION		Create a class that imitates part of the functionality of
                the basic data type int .
FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-11		LK	Start date
*******************************************************************************
*/

#include <iostream>
#include "ovning_kap6_1_class.h"
using namespace std;

int main() {
    Int numberSum;
    numberSum.zerointVariable();
    Int numberA, numberB;
    numberA.setintVariable(10); //Save numberA in object
    numberB.setintVariable(15);
    cout << endl;
    cout << "This program take two variables and calc sum" << endl;
    cout << "============================================" << endl;
    cout << "Variable A: " << numberA.getintVariable() << endl;
    cout << "Variable B: " << numberB.getintVariable() << endl;
    numberSum.sumintVariable(numberA, numberB);
    cout << "Summan av talen blir: " << numberSum.getintVariable() << endl;
    cout << endl;
    return 0;
}