//
// created  by Nataliya Lisjö
//
#include <iostream>
#include "ohm.h"
using namespace std;



double resistance( double x, double y);

struct   El {
    double volt;          // spänning U
    double ohm;           //  resistance  R
    double amper ;         // ström I

};

int main(void) {
    struct El schema1;
    while (cin.fail()) {

        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "write in Volt: ";
        cin >> schema1.volt;
        cout << "write in micro Amper: ";
        cin >> schema1.amper;
        schema1.ohm = resistance(schema1.volt, schema1.amper);//R=U/I
        cout << schema1.ohm << endl;
    }
}

double resistance( double x, double y) // R=U/I
{
    double z = 1000*x/y;
    return z;
}
double current (double x , double y){
    double z = x*y;
    return z;
}