// I was going to deal with some general isssues but i cant deal
// with the overflow from cin.
// if we cin.clear() it jumps over one cin <<
// and takes values that shouldnt be there.
// this is how far i got and it should be enough..
#include "class.tasks.hpp"

using namespace std;

// Constructor
tasks::tasks(void)
{
	// what we want to be run first
    // Task 4.1
    phoneNumber();
    // Task 4.2
    point();
    // Task 4.3
    rooms();
    // Task 4.4
    employees();
    // Task 4.5
    dates();
    // Task 4.6
    employeeType();
    // Task 4.7
    employeeTyper();
    // Task 4.8
    fraction();
    // Task 4.9
    time();
    // Task 4.10
    sterlings();
    // Task 4.11
    timee();
    // Task 4.12
    fract();
}

// Destructor
tasks::~tasks(void)
{
	// what we want to be run last
    // The end.
    cout << "That's it. Thanks for trying out all the functions!" << endl;
}

/*
 * Programming task 4.1
 */
void tasks::phoneNumber(void)
{
    // My number is fixed.
    myNumber.area = 212;
    myNumber.exchange = 767;
    myNumber.number = 8900;

    // user input
    cout << "Enter your area code (111), exchange (222), and number (3333): ";
    cin >> userNumber.area >> userNumber.exchange >> userNumber.number;

    // user output
    cout << "My number is (" << myNumber.area << ") "
    << myNumber.exchange << "-" << myNumber.number << endl;

    cout << "Your number is (" << userNumber.area << ") "
    << userNumber.exchange << "-" << userNumber.number << endl;
}

/*
 * Programming task 4.2
 */
void tasks::point(void)
{
    cout << "Enter coordinates for P1: " << endl;
    cin >> p1.x >> p1.y;    // user input

    cout << "Enter coordinates for P2: " << endl;
    cin >> p2.x >> p2.y;    // user input

    // Sums up the numbers.
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;

    cout << "Coordinates of P1+P2 are: "
    << sum.x << ", " << sum.y << endl;  // user output
}

/*
 * Programming task 4.3
 */
void tasks::rooms(void)
{
    cout << "Enter height (feet, inches): " << endl;
    cin >> room.height.feet >> room.height.inch;    // user input

    cout << "Enter width (feet, inches): " << endl;
    cin >> room.width.feet >> room.width.inch;      // user input

    cout << "Enter lenght (feet, inches): " << endl;
    cin >> room.lenght.feet >> room.lenght.inch;    // user input

    float sum = toFoot(room.height) * toFoot(room.width) * toFoot(room.lenght);

    cout << "Volume of the room is: "
    << sum << " cubic feet" << endl;    // user output
}

float tasks::toFoot(distances x)
{
    return ((x.feet + x.inch) / 12.0);  // 12.0 since its a float.
}


/*
 * Programming task 4.4
 */
void tasks::employees(void)
{
    // user input
    cout << "Enter employee number and compensation: " << endl;
    cin >> emp1.num >> emp1.comp;

    cout << "Enter employee number and compensation: " << endl;
    cin >> emp2.num >> emp2.comp;

    cout << "Enter employee number and compensation: " << endl;
    cin >> emp3.num >> emp3.comp;

    // user output
    cout << "Employee id is: " << emp1.num
         << " and compensation is: " << emp1.comp << endl;

    cout << "Employee id is: " << emp2.num
         << " and compensation is: " << emp2.comp << endl;

    cout << "Employee id is: " << emp3.num
         << " and compensation is: " << emp3.comp << endl;

}

/*
 * Programming task 4.5
 */
void tasks::dates(void)
{
    char sep;   // Separate
    cout << "Enter date format MM/DD/YYYY: " << endl;
    cin >> date1.month >> sep >> date1.day >> sep >> date1.year;

    validateDate(date1);

    cout << endl << "Date is " << date1.month << "/"
         << date1.day << "/" << date1.year << endl;

}

/*
 * Programming task 4.6
 */
void tasks::employeeType(void)
{
    char type;  // Only looking for a charcater.

    cout << "Enter employee type "
    "(l = laborer, s = secretary, m = manager, "
    "a = accountant, e = executive, r = researcher): ";
    // user input
    cin >> type;

    // Control if the type was right.
    controlType(type, etype1);

    // output the type.
    cout << "Employee type is: " << e_type(etype1) << endl;

    // End with an endline.
    cout << endl;
}

/*
 * Returns the type.
 */
tasks::etype tasks::theType(char t)
{
    switch (t)
    {
        case 'l':
            return laborer;
        case 's':
            return secretary;
        case 'm':
            return manager;
        case 'a':
            return accountant;
        case 'e':
            return executive;
        case 'r':
            return researcher;
        default:
            return unknown;
    }

    // Return unknown if we unsure about what we're up to!??
    return unknown;
}

// No, not martin eriksson
string tasks::e_type(etype e)
{
    string temp;
    switch (e)
    {
        case laborer:
            temp = "laborer";
            break;
        case secretary:
            temp = "secretary";
            break;
        case manager:
            temp = "manager";
            break;
        case accountant:
            temp = "accountant";
            break;
        case executive:
            temp = "executive";
            break;
        case researcher:
            temp = "researcher";
            break;
        default:
            temp = "invalid input";
            break;
    }

    return temp;
}

tasks::etype tasks::controlType(char type, etype &etype)
{
    while (true)
    {
        if (theType(type) == unknown)
        {
            cout << "Wrong input, try again" << endl
                 << "Enter employee type "
                 "(l = laborer, s = secretary, m = manager, "
                 "a = accountant, e = executive, r = researcher): ";

            cin >> type;
        }
        else
        {
            // break out.
            break;
        }
    }

    etype = theType(type);

    return etype;
}

/*
 * Programming task 4.7
 */
void tasks::employeeTyper(void)
{
    char empType;
    char sep;

    // First employee..
    cout << "Enter the first employee information. " << endl;
    cout << "Employee number: " << endl;
    cin >> emp1.num;
    cout << "Compensation: " << endl;
    cin >> emp1.comp;
    cout << "Enter employee type "
         "(l = laborer, s = secretary, m = manager, "
         "a = accountant, e = executive, r = researcher): " << endl;
    cin >> empType;
    controlType(empType, emp1.type);
    cout << "Enter date when employed (MM/DD/YY): ";
    cin >> emp1.employed.month >> sep
        >> emp1.employed.day >> sep >> emp1.employed.year;
    validateDate(emp1.employed);

    // Second employee..
    cout << "Enter the second employee information. " << endl;
    cout << "Employee number: " << endl;
    cin >> emp2.num;
    cout << "Compensation: " << endl;
    cin >> emp2.comp;
    cout << "Enter employee type "
         "(l = laborer, s = secretary, m = manager, "
         "a = accountant, e = executive, r = researcher): " << endl;
    cin >> empType;
    controlType(empType, emp2.type);
    cout << "Enter date when employed (MM/DD/YY): ";
    cin >> emp2.employed.month >> sep
        >> emp2.employed.day >> sep >> emp2.employed.year;
    validateDate(emp2.employed);

    // Third employee..
    cout << "Enter the third employee information. " << endl;
    cout << "Employee number: " << endl;
    cin >> emp3.num;
    cout << "Compensation: " << endl;
    cin >> emp3.comp;
    cout << "Enter employee type "
         "(l = laborer, s = secretary, m = manager, "
         "a = accountant, e = executive, r = researcher): " << endl;
    cin >> empType;
    controlType(empType, emp3.type);
    cout << "Enter date when employed (MM/DD/YY): ";
    cin >> emp3.employed.month >> sep
        >> emp3.employed.day >> sep >> emp3.employed.year;
    validateDate(emp3.employed);


    // Store strings.
    string empl1 = e_type(emp1.type);
    string empl2 = e_type(emp2.type);
    string empl3 = e_type(emp3.type);

    // Outputs First employee
    cout << "Details of first employee: " << endl
         << "Employee number: " << emp1.num << endl
	     << "Employee compensation: " << emp1.comp << endl
	     << "Employee type is: " << ucfirst(empl1) << endl
         << "Employee date of first employment: " <<
         emp1.employed.month << "/" << emp1.employed.day << "/"
         << emp1.employed.year << endl;

    // Outputs Second employee
    cout << "Details of second employee: " << endl
         << "Employee number: " << emp2.num << endl
     	 << "Employee compensation: " << emp2.comp << endl
     	 << "Employee type is: " << ucfirst(empl2) << endl
         << "Employee date of first employment: " <<
         emp2.employed.month << "/" << emp2.employed.day << "/"
         << emp2.employed.year << endl;

    // Outputs Third employee
     cout << "Details of third employee: " << endl
          << "Employee number: " << emp3.num << endl
          << "Employee compensation: " << emp3.comp << endl
          << "Employee type is: " << ucfirst(empl3) << endl
          << "Employee date of first employment: " <<
          emp3.employed.month << "/" << emp3.employed.day << "/"
          << emp3.employed.year << endl;
}

/*
 * Converts the first character of a string to uppercase.
 */
string tasks::ucfirst(string &str)
{
    if (isalpha(str[0]))
    {
        str[0] = toupper(str[0]);
    }

    return str;
}

tasks::date tasks::validateDate(date &date)
{
    char sep;
    bool status = true;

    // Status will only change if we hit something bad within the dates.

    if ((date.day < 1) || (date.day > 31))
    {
        cout << "The days are out of gregorian calendar. Must be between "
             "1 and 31 (depeding on the month)" << endl;
        status = false;
    }
    else if ((date.month < 1) || (date.month > 12))
    {
        // Day too large.
        cout << "The days are out of gregorian calendar. Must be between "
             "1 and 31 (depeding on the month)" << endl;
        status = false;
    }
    else if ((date.year < 0) || (date.year > 99))
    {
        // Year out of range.
        cout << "Year is way off. Must be within 00 and 99" << endl;
        status = false;
    }

    // Days in these months can only be less than 30 days
    // First control makes sure that we don't have more than 31 days..
    if (((date.month == 4) || (date.month == 6) ||
        (date.month == 9) || (date.month == 11)) &&
        (date.day == 31))
    {
        // The month and days dont match.
        cout << "The month and days doesn't match." << endl;
        status = false;
    }
    else if (((date.month == 2) && (date.year % 4 == 0)) &&
             (date.day > 29))
    {
        // Year is not a leap year.
        cout << "The year is not a leap year" << endl;
        status = false;
    }
    else if (((date.month == 2) && (date.year % 4 != 0)) &&
             (date.day > 28))
    {
        // Year is not a leap year.
        cout << "The year is not a leap year" << endl;
        status = false;
    }

    if (status == false)
    {
        cout << "Enter date when employed (MM/DD/YY): ";
        cin >> date.month >> sep >> date.day
            >> sep >> date.year;
        // Just control that we got the right type.
        validateDate(date);
    }

    return date;
}

/*
 * Programming task 4.8
 */
void tasks::fraction(void)
{
    char sep;
    cout << "Enter first fraction: ";
	cin >> num1.num >> sep >> num1.den;

    cout << "Enter second fraction: ";
	cin >> num2.num >> sep >> num2.den;

    num3.num = num1.num * num2.den + num1.den * num2.num;
	num3.den = num1.den * num2.den;
	cout << "Sum is: " << num3.num << "/" << num3.den << endl;
}

/*
 * Programming task 4.9
 */
void tasks::time(void)
{
    char sep;

    cout << "Enter time: " << endl;

    cin >> etime.hour >> sep >> etime.min >> sep >> etime.sec;

    long totalsecs = etime.hour * 3600 + etime.min * 60 + etime.sec;

    cout << "Total seconds is: " << totalsecs << endl;
}

/*
 * Programming task 4.10
 */
void tasks::sterlings(void)
{
    float pound, fracPound, dShilling, fracShilling;
    cout << "Enter decimal pounds: " << endl;
    cin >> pound;

    ester.pound = int(pound);
    fracPound = pound - ester.pound;

    dShilling = fracPound * 20;
    ester.shilling = int(dShilling);
    fracShilling = dShilling - ester.shilling;

    ester.pence = int(fracShilling) * 12;

    cout << "The equivalent in old notation: " << ester.pound << "."
         << ester.shilling << "." << ester.pence << endl;

}

/*
 * Programming task 4.11
 */
void tasks::timee(void)
{
    char sep;

    cout << "Enter first time in format (HH:MM:SS): " << endl;

    cin >> time1.hour >> sep >> time1.min >> sep >> time1.sec;

    cout << "Enter second time in format (HH:MM:SS): " << endl;

    cin >> time2.hour >> sep >> time2.min >> sep >> time2.sec;

    // Could use 60 * 60 or 3600..
    long sec1 = (time1.hour * 3600) + (time1.min * 60) + time1.sec;
    long sec2 = (time2.hour * 3600) + (time2.min * 60) + time2.sec;
    long dif;
    // If not it will display negative value.. (next day..)
    if (sec1 < sec2)
    {
        dif = sec2 - sec1;
    }
    else
    {
        dif = sec1 - sec2;
    }

    time3.hour = (dif / 60 / 60);
    time3.min = time3.hour % 60;
    time3.sec = dif % 60;

    cout.fill('0');
    cout << "The time is: " << time3.hour << ":" << time3.min << ":"
         << time3.sec << endl;
}

/*
 * Programming task 4.12
 */
void tasks::fract(void)
{
    bool status = true;
    char ch;
    while (status)
    {
        char op, sep;
        // Do..
        do
        {
            cout << "Enter first fraction: " << endl;
            cin >> num1.num >> sep >> num1.den;

            cout << "Operation: " << endl;
            cin >> op;

            cout << "Enter second fraction" << endl;
            cin >> num2.num >> sep >> num2.den;

            switch (op)
            {
                case '+':
                    num3.num = num1.num * num2.den + num1.den * num2.num;
                    num3.den = num1.den * num2.den;
                    cout << "Sum: " << num3.num << "/"
                         << num3.den << endl;
                    break;
                case '-':
                    num3.num = num1.num * num2.den - num1.den * num2.num;
                    num3.den = num1.den * num2.den;
                    cout << "Subtraction: " << num3.num << "/"
                         << num3.den << endl;
                    break;
                case '/':
                    num3.num = num1.num * num2.den;
                    num3.den = num1.den * num2.num;
                    cout << "Division: " << num3.num << "/"
                         << num3.den << endl;
                    break;
                case '*':
                    num3.num = num1.num * num2.num;
                    num3.den = num1.den * num2.den;
                    cout << "Multiplication: " << num3.num << "/"
                         << num3.den << endl;
                    break;
                default:
                    cout << "Invalid operation." << endl;
    				break;
            }

            cout << "Do you want to do anther fraction? (Y/N): ";
            cin >> ch;
        } while (ch == 'Y' || ch == 'y');

        if (ch == 'n' || ch == 'N')
        {
            status = false; // enough with break but just to be sure.
            break;
        }
        else
        {
            cout << "Beep boop, wrong input. Please try again." << endl
                 << "Do you want to continue (Y/N): ";
            cin >> ch;
        }
    }
}
