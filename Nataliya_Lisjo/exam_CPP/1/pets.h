//Date        : 12/7/2020
//File        : pets.h
//Description : Program ask user name, age and sex of a pet .
//Author      : Nataliya Lisjö
//-------------------------------------------------------------------------

#ifndef INC_1_PETS_H
#define INC_1_PETS_H

#include <iostream>
#include <string>
using namespace std;
//---------------
//define a class
class Pets {

private:
    string Name;
    int Age;
    bool IsFemale ;

public:
    char  setPetsName();
    char getPetsName();
    int setPetsAge();
    int  getPetsAge();
    void  setSex();
    int  getSex();
};


#endif //INC_1_PETS_H
