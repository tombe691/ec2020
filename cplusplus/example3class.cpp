#include <iostream>
#include <string>
#include "example3class.h"
////////////////////////////////////////////////////////////////
void person::setname(string name2) //member function to set data
{ name1 = name2; }
void person::setage(int d) //member function to set data
{ age = d; }
void person::showdata() //member function to display data
{ cout << "Name is " << name1 << " and age is " << age << endl; }

