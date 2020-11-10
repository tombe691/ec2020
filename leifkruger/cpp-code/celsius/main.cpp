/*
*******************************************************************************
FILENAME		celsius.cpp

Encoding		UTF-8

DESCRIPTION		Convert Fahrenheit F to Celsius C.

FUNCTIONS

NOTES			Menu language - English

Compiler		g++ 9.3.0 amd64 running @ Ubuntu 20.04 LTS

Lang dialect	ISO C++14 (g++ by default uses option '-std=gnu++14')

				Copyright L.Krüger 2020. All rights reserved.

AUTHOR			Leif Krüger, leif@leifkruger.se

CHANGES

REF NO	VERSION		DATE (YYMMDD)	WHO	DETAIL
-------------------------------------------------------------------------------
		1			2020-11-06		LK	Start date
*******************************************************************************
*/

#include <iostream>
#include <climits>
using namespace std;

void checkInput(string inmatingstext, double *tempFahrenheit);
void convertFahrenheittocelsius(double tempFahrenheit, double *tempCelsius);

int main() {
    char runAgain; //Question variable run once again
    double tempFahrenheit, tempCelsius;
    cout << "Temperaturomvandling" << endl;
    cout << "====================" << endl;
    cin.ignore(INT_MAX, '\n');
    do {

        checkInput("Ange dagstemperatur i Fahrenheit: ", &tempFahrenheit);
        convertFahrenheittocelsius(tempFahrenheit, &tempCelsius);
        cout << tempCelsius << " grader Celsius. "; //One decimal

        if (tempCelsius < 0) {
            cout << "Sådana dagar vill man stanna inne!";
        }
        else if (tempCelsius > 20) {
            cout << "Sådana dagar       ser vi fram emot!";
        }

        //cout << "\nEn gång till (J/N)? "; //Run again?
        //cin >> runAgain;
        do {
            cin.clear(); // clear the input stream
            cin.ignore(INT_MAX, '\n'); // ignore remaining input
            cout << "\nAvsluta?, tryck (n) <ENTER>, Engång till tryck valfri tangent <ENTER>? "; //Run again?
            cin >> runAgain;
        }
        while (cin.fail());
        runAgain = toupper(runAgain); //Handles both j and J for next step
    } while (runAgain != 'N');
    return 0;
}

void checkInput(string inmatningstext, double *tempFahrenheit) {
    do {
        cin.clear(); // clear the input stream
        cin.ignore(INT_MAX, '\n'); // ignore remaining input
        cout << inmatningstext << "? ";
        cin >> *tempFahrenheit;
    } while (cin.fail());
}

void convertFahrenheittocelsius(double tempFahrenheit, double *tempCelsius) {
    *tempCelsius = 5 * (tempFahrenheit - 32) / 9; //Formula Fahrenheit to Celsius
}

/*
 else {
            cout << "Inte ett gilltigt inmatat tal. Försök igen!" << endl;

}



 #include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;
double fahrenheitToCelsius(double graderFahrenheit, double graderCelsius);
void controlInput(string valueFor, double *variableToRead);
int main() {
    // Declaration of variabels.
    double fahrenheit, celsius, newFahrenheitToCelsius;
    char jaEllerNej;
    // Welcomes you and prints question.
    cout <<"Temperaturomvandling\n" << endl;
    cout << "====================\n" << endl;
    cout << "Ange dagstemperatur i Fahrenheit: " << endl;
    cin >> fahrenheit;
    controlInput("Skriv bara siffror! Fahrenheit?", &fahrenheit);
    // Calling the function
    newFahrenheitToCelsius = fahrenheitToCelsius(fahrenheit, celsius);
    while (1) {
        // Presents result.
        if (newFahrenheitToCelsius <= 20) {
            cout << newFahrenheitToCelsius << "grader Celsius. Sådana dagar vill man stanna inne!\n" << endl;
            cout << "En gång till (J/N)?" << endl;
            cin >> jaEllerNej;
            jaEllerNej = tolower(jaEllerNej);
        } else if (newFahrenheitToCelsius >= 20.1) {
            cout << newFahrenheitToCelsius << "grader Celsius. Sådana dagar ser vi fram emot!\n";
            cout << "En gång till (J/N)?";
            cin >> jaEllerNej;
            jaEllerNej = tolower(jaEllerNej);
        }
        //Stringcompare to get the J and ask to restart.
        if (jaEllerNej != 'n') {
            cout << "Ange dagstemperatur i Fahrenheit: " << endl;
            cin >> fahrenheit;
            controlInput("Skriv bara siffror! Fahrenheit", &fahrenheit);
            newFahrenheitToCelsius = fahrenheitToCelsius(fahrenheit, celsius);
        }
            // if not break.
        else
        {
            cout << "GOODBYE!";
            break;
        }
    }
        return 0;
}
double fahrenheitToCelsius(double graderFahrenheit, double graderCelsius)
    {
        graderCelsius = (graderFahrenheit-32)*5/9;
        return graderCelsius;
    }
void controlInput(string stringToWrite, double *variableToRead)
{
    do
    {
        // clear the input stream
        cin.clear();
        // ignore remaining input
        cin.ignore(INT_MAX, '\n');
        cout << stringToWrite << endl;
        cin >> *variableToRead;
    }
    while (cin.fail());
}


 */