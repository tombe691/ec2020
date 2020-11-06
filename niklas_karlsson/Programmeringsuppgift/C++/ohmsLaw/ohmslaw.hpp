// File: ohmslaw.hpp
// Summary: Class declarations for the ohms law.
// Version: 1.11b
// Owner: Niklas Karlsson
// ---------------------------------------------------------------
// Log: 2020-11-06 Created the file. Niklas

/*
 * Why is it called U in EU and V in US?
 * U = Unterschied which is "difference" in german
 * That darn OHM.. Can't use C for current.
 * Since currents = 2 currents... sounds so horrible that the lord himself
 * ate the apple.
 */

#include <cmath>
#include <iostream>

using namespace std;

class ohmsLaw
{
    public:
        ohmsLaw(void);
        ~ohmsLaw(void);
        int menu(int exclude);
    private:
        // For storage of our incredible calculation
        struct ohmsTable
        {
            double R = 0;   // Resistance / Ohm
            double I = 0;   // Ampere / intensité du courant (current intensity)
            double P = 0;   // Power / Watt
            double U = 0;   // Unterschied / Voltage
        } ohms;
        void cinner(void);
};
