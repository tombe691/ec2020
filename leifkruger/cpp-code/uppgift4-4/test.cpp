/*
*******************************************************************************
FILENAME		ohmslaw.cpp

Encoding		UTF-8

DESCRIPTION		.Calculate Volt, Resistance, Ampere.

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
#include <cmath>

using namespace std;

void inputCheck(char *quantity, uri *unit);
void current();
void resistance();
void voltage();

struct ohmsLaw {
    double current;
    double voltage;
    double resistance;
};

using namespace std;
int main() {
    char chooseRunagain;
    do {
        char chooseCalculationUri;
        ohmsLaw uri;
        cout << "Which calculation? U (voltage),  R (resistance) I (current)? " << endl;
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
        cout << "Do you want to do a new calculation? Y/N? " << endl;
        cin >> chooseRunagain;
        chooseRunagain = tolower(chooseRunagain);
    } while (chooseRunagain != 'n');
    return 0;
}

void voltage() {
    ohmsLaw uri;
    char resistance[] = "Resistance";
    char current[] = "Current";
    inputCheck(resistance, *resistance);
    inputCheck(current, *current);
    cout << "Result = " << uri.resistance * uri.current << " V" << endl;
}

/*
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
    cout << "Result = " << uri.resistance * uri.current << " V" << endl;
}

 */
void resistance() {
    ohmsLaw uri;
    cout << "Voltage? ";
    cin >> uri.voltage;
    cout << "Current? ";
    cin >> uri.current;
    cout << "Result = " << uri.voltage / uri.current << " Ohm" << endl;
}
void current() {
    ohmsLaw uri;
    cout << "Resistance? ";
    cin >> uri.resistance;
    cout << "Voltage? ";
    cin >> uri.voltage;
    cout << "Result  = " << uri.resistance / uri.current << " A" << endl;
}

void inputCheck(char *quantity, uri *unit) {
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << quantity << "? ";
        cin >> *unit.*quantity;
    }
    while (cin.fail());
}

/*
 void inputCheck(char *quantity, const struct *uri) {
    do {
        cin.clear();
        cin.ignore(100,'\n');
        cout << quantity << "? ";
        cin >> *unit;
    }
    while (cin.fail());
}
 */