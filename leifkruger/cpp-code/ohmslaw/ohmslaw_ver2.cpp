/*
*******************************************************************************
FILENAME		ohmslaw.cpp

Encoding		UTF-8

DESCRIPTION		Calculate Voltage, Resistance, Current.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-04		LK	Start date
		2			2020-11-05		LK	Uses more general functions
		3			2020-11-06		LK	Use of INT_MAX in function checkInput
*******************************************************************************
*/

#include <iostream>
#include <climits>
using namespace std;

void checkInput(string quantity, double *uriVariable);
void showResultat(string quantity, double *uriVariable1, double *uriVariable2);

struct ohmsLaw {
    double voltage;
	double current;
    double resistance;
};

int main() {
    char chooseRunagain;
    do {
        char chooseCalculationUri;
        ohmsLaw uri;
        cout << "\nOhm's law" << endl;
        cout << "=========" << endl;
        cout << "Select the quantity to be calculated:" << endl;
		cout << "Voltage (u), Resistance (r), Current (i)? ";
        cin >> chooseCalculationUri;
        chooseCalculationUri = tolower(chooseCalculationUri);
		
		switch(chooseCalculationUri) {
			case 'u':
				checkInput("Current (A)", &uri.current);
				checkInput("Resistance (Ohm)", &uri.resistance);
				showResultat("Voltage", &uri.current, &uri.resistance);
				break;
			case 'r':
				checkInput("Voltage (V)", &uri.voltage);
				checkInput("Current (A)", &uri.current);
				showResultat("Resistance", &uri.voltage, &uri.current);
				break;
			case 'i':
				checkInput("Voltage (V)", &uri.voltage);
				checkInput("Resistance (Ohm)", &uri.resistance);
				showResultat("Current", &uri.voltage, &uri.resistance);
				break;
			default:
				cout << "\nSorry wrong menu selection!\n";
		}
		
		cout << "\nDo you want to do a new calculation, y/n? ";
        cin >> chooseRunagain;
        chooseRunagain = tolower(chooseRunagain);
    } while (chooseRunagain != 'n');
    return 0;
}

void checkInput(string quantity, double *uriVariable) {
    do {
		cin.clear(); // clear the input stream
        cin.ignore(INT_MAX, '\n'); // ignore remaining input
		cout << quantity << "? ";
        cin >> *uriVariable;
    }
    while (cin.fail());
}

void showResultat(string quantity, double *uriVariable1, double *uriVariable2) {
	if (quantity == "Voltage") {
		cout << "Result: " << quantity << " = " << *uriVariable1 * *uriVariable2
		 << " V" << endl;
	}
	else if (quantity == "Resistance") {
		cout << "Result: " << quantity << " = " << *uriVariable1 / *uriVariable2
		 << " Ohm" << endl;
	}
	else if (quantity == "Current") {
		cout << "Result: " << quantity << " = " << *uriVariable1 / *uriVariable2
		 << " A" << endl;
	}
}