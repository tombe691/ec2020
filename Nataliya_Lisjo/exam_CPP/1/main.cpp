//Date        : 12/7/2020
//File        : main.cpp
//Description : Program ask user name, age and sex of a pet .
//Author      : Nataliya Lisjö
//Version    : 1.1
//-------------------------------------------------------------------------

#include <iostream>
#include "pets.h"

using namespace std;


int main() {
    //create class object
    Pets pet1;

    cout << "\n Welcome!" << endl;
    pet1.getPetName();
    pet1.getPetAge();
    while (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "This isn't DIGITAL, try again: "<<endl ; //  error message
        pet1.getPetAge();
    }
    pet1.setSex();


    cout <<"+++++++++++++++++++++++++++++++"<<endl;
    pet1.showPetName();
    pet1.showPetAge();
    pet1.showSex() ;
    cout <<"+++++++++++++++++++++++++++++++"<<endl;


    return 0;
}
