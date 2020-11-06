// File: degree.cpp
// Summary: Collected all the degree functions that belong to the degree
//          class.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------
// Log: 2020-11-06 Created the file. Niklas
//      2020-11-06 Saved all the degree functions here.

#include "degree.hpp"

// Constructor, accepts no arguments at this moment.
degree::degree(void)
{
    // Just to demonstrate what we can do
    cout << "Welcome to this amazing converter." << endl;
}

// Destructor, accepts no arguments
degree::~degree(void)
{
    cout << "Thank you for using this simple converter!"
         << endl << "Have a happy period!" << endl;
}

/*
 * Function for calling the fahrenheit to celsius questions
 * The function then call the mathematical equations.
 */
void degree::fahrenheit(void)
{
    double fahrenheit;
    cout << "Enter fahrenheit: " << endl;
    cin >> fahrenheit;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Value must be a digit. Try again: " << endl;

        cin >> fahrenheit;
    }

    cout << fahrenheit << " degree fahrenheit is: " << fahrenheit2celsius(fahrenheit)
         << " degree celsius!" << endl;
}

/*
 * Function for calling the celsius to fahrenheit questions
 * The function then call the mathematical equations.
 */
void degree::celsius(void)
{
    double celsius;
    cout << "Enter celsius: " << endl;
    cin >> celsius;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Value must be a digit. Try again: " << endl;

        cin >> celsius;
    }

    cout << celsius << " degree celius is: " << celsius2fahrenheit(celsius)
         << " degree fahrenheit!" << endl;
}

/*
 * Function to prompt user if we wanna continue or not
 */
void degree::yesNo(void)
{
    char ch;
    while (true)
    {
        cout << "Do you wish to continue? (Y / N)" << endl;

        cin >> ch;
        // If user answers no.
        if (ch == 'n' || ch == 'N')
        {
            changeExitStatus(true);
            changePassStatus(true);
            break;
        }
        // If user answers yes.
        else if (ch == 'y' || ch == 'Y')
        {
            changePassStatus(false);
            break;  // Exit this loop
        }
        else if (ch == '\n' || ch == '\r')
        {
            cout << "Did you enter a new line? " << endl;
            changePassStatus(false);
            continue;   // Continue this loop.
        }
        else
        {
            // Just to demonstrate when using more than 2 control letters
            char str[4] = { 'Y', 'y', 'N', 'n' };
            isNum(ch, str, 3);

            changePassStatus(false);
            continue;   // Continue this loop.
        }
    }
}

/*
 * Bad control for characters but will be adding better soon
 * argument input for user input
 * acc for accepted characters.
 * len for length of array (number of elements)
 */
void degree::isNum(char input, char acc[], int len)
{
    if (isdigit(input))
    {
        cout << "Not accepting numbers, you entered: " << input << endl;
    }
    else if (isalpha(toupper(input)))
    {
        cout << "Only accepting characters ";
        for (int i = 0; i < acc[i]; i++)
        {
            // first element
            if (i == 0)
            {
                cout << acc[i];
            }
            // check last element
            else if ((i == len) && (acc[i] != '\0'))
            {
                cout << " and " << acc[i];
                break;
            }
            else
            {
                cout << ", " << acc[i];
            }
        }
        cout << " (doesn't matter if its upper case or lower case.) " << endl
             << "The problem is that you entered: " << input << endl << endl;
    }
    // clear input.
    cin.clear();
    cin.ignore(INT_MAX, '\n');
}

/*
 * The calculation is made here for fahrenheit to celsius
 */
double degree::fahrenheit2celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

/*
 * The calculation is made here for celsius 2 fahrenheit
 */
double degree::celsius2fahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
