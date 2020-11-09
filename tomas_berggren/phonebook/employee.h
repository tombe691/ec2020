//
// Created by Tomas Berggren on 2020-11-09.
//

#ifndef PHONEBOOK_EMPLOYEE_H
#define PHONEBOOK_EMPLOYEE_H


class Employee
{
        //gör synliga
    public:
        int Id;
        char Name[25];
        int Age;
        long Salary;

        // printname is not defined inside class definition
        void printname();

        void setId(int id);

        // printid info defined inside class definition
        void printinfo();

};



#endif //PHONEBOOK_EMPLOYEE_H
