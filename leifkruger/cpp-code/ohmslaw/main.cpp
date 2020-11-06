/*
*******************************************************************************
FILENAME		ohmslaw.cpp

Encoding		UTF-8

DESCRIPTION		Calculate Volt, Resistance, Ampere.

FUNCTIONS

NOTES			Menu language - Swedish

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-04		LK	Start date

*******************************************************************************
*/

#include <iostream>

using namespace std;

void current();
void resistance();
void voltage();

struct ohmsLaw {
    double current;
    double voltage;
    double resistance;
};

int main() {
    char chooseRunagain;
    do {
        char chooseCalculationUri;
        ohmsLaw uri;
        cout << "\nOhm's law" << endl;
        cout << "=========" << endl;
        cout << "Which calculation? Voltage (u), Resistance (r), Current (i)? ";
        cin >> chooseCalculationUri;
        chooseCalculationUri = tolower(chooseCalculationUri);
        if (chooseCalculationUri == 'u') {
            voltage();
        }
        else if (chooseCalculationUri == 'r') {
            resistance();
        }
        else if (chooseCalculationUri == 'i') {
            current();
        }
        else {
            cout << "Sorry! Wrong input! ";
        }
        cout << "Do you want to do a new calculation? Y/N? ";
        cin >> chooseRunagain;
        chooseRunagain = tolower(chooseRunagain);
    } while (chooseRunagain != 'n');
    return 0;
}

void voltage() {
    ohmsLaw uri;
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Resistance? ";
        cin >> uri.resistance;
    }
    while (cin.fail());
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Current? ";
        cin >> uri.current;
    }
    while (cin.fail());
    cout << "Result: Voltage = " << uri.resistance * uri.current << " V\n" << endl;
}

void resistance() {
    ohmsLaw uri;
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Voltage? ";
        cin >> uri.voltage;
    }
    while (cin.fail());
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Current? ";
        cin >> uri.current;
    }
    while (cin.fail());
    cout << "Result: Resistance = " << uri.voltage / uri.current << " Ohm\n" << endl;
}
void current() {
    ohmsLaw uri;
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Voltage? ";
        cin >> uri.voltage;
    }
    while (cin.fail());
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Resistance? ";
        cin >> uri.resistance;
    }
    while (cin.fail());
    cout << "Result: Current = " << uri.voltage / uri.resistance << " A\n" << endl;
}