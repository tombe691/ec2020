/*
 * This is just a test
 */
#include <stdio.h>

int main(void)
{
    printf("Hello! Please enter your social security number:");

    // date of birth, ie 860121
    long long int dateOfBirth;
    // Controlnumber XXYZ
    int controlNumber, year, day, month;

    // Looking for (00)112233-4456 or (00)112233+5567 (if you're over 100years)
    if (scanf("%d-%d"), &dateOfBirth, &controlNumber) == 1) || (scanf("%d+%d"), &dateOfBirth, &controlNumber) == 1)
    {
        socialSecurity(dateOfBirth, controlNumber);
    }
    // Looking for (00)11-22-33-4456
    else if (scanf("%d-%d-%d-%d", &year, &month, &day) == 1)
    {
        controlDate(year, month, day);

        socialSecurity(dateOfBirth, controlNumber);
    }
    return 0;
}


long long int socialSecurity(long long in birth, int control)
{

    return
}


void gender(int gender)
{
    if (gender == 1)
    {
        printf("It's a girl\n");
    }
    else
    {
        printf("It's a boy\n");
    }
}

long long int controlDate(int year, int month, int day)
{
    long long int dateOfBirth[2];
    // this will be the easiest.
    if (yearControl(year))
    {
        dateOfBirth[0] = year;
    }

    if (monthControl(month))
    {
        dateOfBirth[1] = month;
    }

    if (!dayControl(day))
    {
        dateOfBirth[2] = day;
    }

    return dateOfBirth;
}

int yearControl(int y)
{
    // Cant be born in the future..
    if (y > 0) && (y < 2020)
    {
        return 0;
    }

    return 1;
}

int monthControl(int m)
{
    // Cant be born in the future..
    if (y > 1) && (y < 12)
    {
        return 0;
    }

    return 1;
}

int dateControl(int d, int m)
{
    // Cant be born in the future..
    if ((m == 1) || (m == 3) || (m == 5) || (m == 5))
    if (d > 1) && (d < 12)
    {
        return 0;
    }

    return 1;
}
