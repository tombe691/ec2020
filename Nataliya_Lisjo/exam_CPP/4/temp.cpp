//Date        : 12/12/2020
//File        : temp.cpp
//Description : program that reads data for six temperature sensors in a house .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------


#include <iostream>
#include <vector>
#include "temp.h"
#include <algorithm>
using namespace std;

void data:: sortbytemp(){
        sort (myhouse.begin(),myhouse.end(), greater<int>());
    for (int i=0; i<5; i++)
        std::cout << myhouse[i] << ' ';
    std::cout << '\n';
    }
