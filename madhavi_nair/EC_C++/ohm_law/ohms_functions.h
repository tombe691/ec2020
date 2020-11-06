////=================================================================
////Filename      : ohms_functions.h
////Description   :  Contains all declarations related to ohms_law
////Version       : 1.0
////Date          : 2020-03-11
////Author        : Madhavi Nair,madhavianair@gmail.com
////=================================================================

#ifndef OHM_LAW_OHMS_FUNCTIONS_H
#define OHM_LAW_OHMS_FUNCTIONS_H

//Declaration of structure and functions
// used in ohms_law
struct ohms_law
{
    float voltage;
    float current;
    float resistance;
};
float get_data(int val_check);
void calculate_voltage(struct ohms_law ohm1);
void calculate_resistance(struct ohms_law ohm1);
void calculate_current(struct ohms_law ohm1);

#define VOLTAGE 1
#define CURRENT 2
#define RESISTANCE 3





#endif //OHM_LAW_OHMS_FUNCTIONS_H
