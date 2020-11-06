// File: degree.hpp
// Summary: Header file for the celsius and fahrenheit functions
//          Class containing declarations and variables.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------
// Log: 2020-11-06 Created the file. Niklas
//      2020-11-06 Added class and named it degree. Can convert fahrenheit
//      to celsius and celsius to fahrenheit. Otherwise fahrenheit2celsius
//      would have been a good name.
//      Made a pass variable to pass first question
//      And will be "stuck" inside that loop until its FALSE. continue/break
//      Will take us out of it when pass is set to false.

#include <iostream>
#include <cstdio>

using namespace std;

class degree
{
    public:
        bool exit = false;
        bool pass = false;
        /*
         * Constructor
         * Destructor.
         */
        degree(void);
        ~degree(void);
        // Questions for converting celsius to fahrenheit
        void fahrenheit(void);
        // Questions for converting fahrenheit to celsius
        void celsius(void);
        // Questions if user want to continue or not.
        void yesNo(void);
        // Simple check if the input is digit or wrong input
        void isNum(char input, char acc[], int len);
        // Change the pass status
        void changePassStatus(bool pass)
        {
            // this == alias for the class name
            this->pass = pass;
        }
        // Bool since we return a boolean value.
        bool getPassStatus(void)
        {
            return this->pass;
        }
        // Change the exit status
        void changeExitStatus(bool exit)
        {
            // this == alias for the class name
            this->exit = exit;
        }
        // Bool since we return a boolean value.
        bool getExitStatus(void)
        {
            return this->exit;
        }

    private:
        // these could be public. But I dont want them to be now.
        // With other words, I don't want them to be callable outside the class.
        double fahrenheit2celsius(double fahrenheit);
        double celsius2fahrenheit(double celsius);
};
