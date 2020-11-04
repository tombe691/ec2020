////=================================================================
////Filename      : ohms_functions.c
////Description   :  Contains all functions used in ohms_law
////Version       : 1.0
////Date          : 2020-03-11
////Author        : Madhavi Nair,madhavianair@gmail.com
////=================================================================

# include <iostream>
# include <cstdlib>
# include "ohms_functions.h"
using namespace  std;

// To receive data from user
float get_data(int val_check)
{
    //Declaring variables
    char buffer[30];
    int flag = 1 ;
    char *ptr;
    float temp;
    while (flag)
    {
        // Check and take volatge value
        if (val_check == VOLTAGE)
        {
            cout << "Enter voltage" << endl;
            cin >> buffer;
        }
        // Check and take current value
        else if (val_check == CURRENT)
        {
            cout << "Enter current" << endl;
            cin >> buffer;
        }
        //Check and take resistance value
        else if (val_check == RESISTANCE)
        {
            cout << "Enter resistance" << endl;
            cin >> buffer;
        }
        // Function to convert string to float
        temp = strtod(buffer, &ptr);
        // Check if *ptr points to a character for
        //invalid data
        if (*ptr != 0)
        {
            cout << "Invalid input" << endl;
        }
        else
        {
            // If valid data, it resets flag and return the
            // value to calling function
            flag = 0;
            return (temp);
        }
    }
}

// Function to calculate resistance
// and display the answer
void calculate_resistance(struct ohms_law ohm1)
{
    ohm1.resistance = ohm1.voltage / ohm1.current;
    cout << "Resistance = " << ohm1.resistance;
}

// Function to calculate current
// and display the answer

void calculate_current(struct ohms_law ohm1)
{
    ohm1.current = ohm1.voltage / ohm1.resistance;
    cout << "Current = " << ohm1.current;
}

// Function to calculate voltage
// and display the answer
void calculate_voltage(struct ohms_law ohm1)
{
    ohm1.voltage = ohm1.current * ohm1.resistance;
    cout << "Voltage = " << ohm1.voltage;
}

