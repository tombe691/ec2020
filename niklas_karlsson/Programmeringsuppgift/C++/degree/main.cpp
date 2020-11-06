// File: main.cpp
// Summary: main function where we start to prompt the user with some basic
//          questions and then call subfunctions.
// Compiling: mingw32-make -f Makefile.win
//            must be in root dir of project for it to work!
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------
// Log: 2020-11-06 Created the file. Niklas
//      2020-11-06 Created class functions and added a loop within the main()

// Our own class.
#include "degree.hpp"

/*
 * Main function
 * We do our magics here.
 */
int main(void)
{
    degree degrees;
    char ch;

    while (true)
    {
        // If we gonna pass this questions. (For yes / no later on)
        if (degrees.getPassStatus() == false)
        {
            cout << "To convert fahrenheit to celsius type F" << endl
                 << "or to convert celsius to fahrenheit type C: " << endl;
            cin >> ch;

            // To convert fahrenheit to celsius
            if (ch == 'f' || ch == 'F')
            {
                degrees.fahrenheit();
                degrees.changePassStatus(true);
                continue;
            }
            // To convert celsius to fahrenheit
            else if ((ch == 'c' || ch == 'C'))
            {
                degrees.celsius();
                degrees.changePassStatus(true);
                continue;
            }
            // anything other than the characters c, C, f or F
            else
            {
                // Just to see what happens
                char str[] = { 'F', 'f', 'C', 'c', '\0' };

                // adding 3 since it keeps adding the users input aswell.
                degrees.isNum(ch, str, 3);
                degrees.changePassStatus(false);
                // Skip everthing below and go back the loop.
                continue;
            }
        }

        // Call the yes/no function
        degrees.yesNo();

        if (degrees.getExitStatus() == true)
        {
            // since we wanna call the destructor
            break;
        }
    }

    // Calling process will get this.
    return 0;
}
