// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
#include "example3class.h"

int main()
{
    person p1, p2; //define two objects of class person
    p1.setage(37); //call member function to set data
    p2.setage(45);
    p1.setname("kajsa");
    p2.setname("kalle");
    p1.showdata(); //call member function to display data
    p2.showdata();
    return 0;
}
