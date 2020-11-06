//=================================================================
//Filename      : main.c
//Description   : To calculate voltage, current, resistance
//                using ohm's law.
//Version       : 1.0
//Date          : 2020-03-11
//Author        : Madhavi Nair,madhavianair@gmail.com
//=================================================================

#include <iostream>
#include "ohms_functions.h"
using namespace std;


int main()
{
    // Declaring variables
    int choice, flag = 0;
    char user_wish[] = {'Y'};
    struct ohms_law ohm1;
    // Check if user wants to continue
    while (user_wish[0] == 'Y'|| user_wish[0] == 'y')
    {
        //Displaying menu
        cout << "Ohms law calculation" << endl << "Choose option"
            << endl << "1. Resistance"<< endl << "2. Current"
            << endl << "3. Voltage" << endl << "Option = ";
        cin >> choice;

        //Passing user choice to perform desired operation
        switch (choice)
        {
            case 1:
                // Calling function to get the values
                ohm1.voltage = get_data(VOLTAGE);
                ohm1.current = get_data(CURRENT);
                // Sending struct object to calculate the third parameter
                calculate_resistance(ohm1);
                flag = 0;
                break;
            case 2:
                ohm1.current = get_data(CURRENT);
                ohm1.resistance = get_data (RESISTANCE);
                calculate_voltage(ohm1);
                flag = 0;
                break;
            case 3:
                ohm1.voltage = get_data( VOLTAGE);
                ohm1.resistance = get_data(RESISTANCE);
                calculate_current (ohm1);
                flag = 0;
                break;
            default:
                // validation for incorrect choice
                cout << "Invalid choice" << endl;
                flag = 1;
                break;

        }
        // condition to check if user wishes to exit or continue
        if( flag == 0)
        {
            do{
                cout << endl << ("Wish to continue? Y or N") << endl;
                cin >> user_wish;
            }
           while((user_wish[0] != 'n') && (user_wish[0] != 'N') && (user_wish[0] != 'Y') && (user_wish[0] != 'y'));
        }
    }

    return 0;
}
