//Date        : 12/12/2020
//File        : temp.h
//Description : program that reads data for six temperature sensors in a house .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------


#ifndef INC_4_TEMP_H
#define INC_4_TEMP_H

#include <iostream>
#include <vector>
using namespace std;

class data{
public:
    struct myhouse{
    string house;
    string floor;
    int  temp;
    };

    vector<pair<string,string>> myhouse;
    void sortbytemp();
    void select_sort();
};

#endif //INC_4_TEMP_H
