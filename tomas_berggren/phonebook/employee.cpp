//
// Created by Tomas Berggren on 2020-11-09.
//
using namespace std;

#include <iostream>
#include "employee.h"

void Employee::printinfo()
{
    cout << "Employee id is: " << Id << "Name is: " << Name
         << "Age is: " << Age << "Salary is: " << Salary << endl;
}

void Employee::setId(int id) {
    cout << id;
    Id = id;
}

void Employee::printname()
{
    cout << "Employee name is: " << Name;
}
