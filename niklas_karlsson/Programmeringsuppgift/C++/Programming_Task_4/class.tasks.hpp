#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

class tasks
{
    public:
        /*
         * Constructor and destructor
         */
        tasks(void);
        ~tasks(void);
        // Task 4.1
        void phoneNumber(void);
        // Task 4.2
        void point(void);
        // Task 4.3
        void rooms(void);
        // Task 4.4
        void employees(void);
        // Task 4.5
        void dates(void);
        // Task 4.6
        void employeeType(void);
        // Task 4.7
        void employeeTyper(void);
        // Task 4.8
        void fraction(void);
        // Task 4.9
        void time(void);
        // Task 4.10
        void sterlings(void);
        // Task 4.11
        void timee(void);
        // Task 4.12
        void fract(void);
    private:
        struct phone
        {
            int area;
            int exchange;
            int number;
        } myNumber, userNumber;

        struct point
        {
            double x;
            double y;
        } p1, p2, sum;

        // English distance
        // Clashes with std if named distance...
        struct distances
        {
            int feet;
            float inch;
        };

        struct volume
        {
            distances width;
            distances height;
            distances lenght;
        } room;

        // Had to be placed above
        struct date
        {
            int month;
            int day;
            int year;
        } date1;

        // No, not martin eriksson.
        enum etype
        {
            laborer, secretary, manager, accountant, executive, researcher,
            unknown
        } etype1;

        struct employee
        {
            int num;
            float comp;
            // Added for exercise 4.7
            // Not to be confused with exorcise. ^(o_O)^
            date employed;
            etype type;
        } emp1, emp2, emp3;

        struct frac
        {
            // numerator
            int num;
            // denominator
            int den;
        } num1, num2, num3;

        struct timee
        {
            int hour;
            int min;
            int sec;
        } etime, time1, time2, time3;

        struct sterling
        {
            int pound;
            int shilling;
            int pence;
        } ester;

        float toFoot(distances x);
        etype theType(char t);
        string e_type(etype e);
        date validateDate(date &date);
        etype controlType(char type, etype &etype);
        string ucfirst(string &str);
        int validateDigInput(int &input);
        float validateFloInput(float &input);
};
