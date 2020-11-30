// File: main.cpp
// Summary: Simple calculator with try 'n' catch.
// Version: 1.0
// Owner: Niklas Karlsson
// ---------------------------------------------------------------

#include <iostream>

using namespace std;
void myMath(void);
char menu(void);

int main(void)
{
    cout << "Hello Welcome to this awesome calculator! " << endl;
    myMath();

    cout << endl << endl;
    return 0;
}

void myMath(void)
{
    double n1, n2, rs, val;
    char op;
    try
    {
        op = menu();
        cout << "Enter two digits." << endl;

        cin >> n1 >> n2;

        switch (op)
        {
            case '+':
                rs = n1 + n2;
                break;
            case '-':
                rs = n1 - n2;
                break;
            case '*':
                rs = n1 * n2;
                break;
            case '/':
                if (n2 == 0)
                {
                    throw 0;
                    break;
                }
                rs = n1 / n2;
                break;
            // if something slips through, correct it!
            default:
                throw op;
                break;
        }

        cout << n1 << " " << op << " " << n2 << " = " << rs;
    }
    // Catch char.
    catch (const char c)
    {
        cerr << "Operation Error: " << c << " is not a valid operator"
             << endl;
        myMath();
    }
    // Catch int
    catch (const int n)
    {
        cerr << "Bad Operator: division by " << n << " not allowed" << endl;
        myMath();
    }
}


char menu(void)
{
    int in;
    char val[4] = {
        '*',
        '+',
        '-',
        '/'
    };

    try
    {
        cout << "Pick a number between 1 and 4 according to the list." << endl
             << "1.  Multiplication (*) " << endl
             << "2.  Addition (+) " << endl
             << "3.  Subtraction (-) " << endl
             << "4.  Division (/) " << endl;

        cin >> in;

        if ((in < 1) || (in > 4))
        {
            cin.clear();
            throw 0;
        }
    }
    catch (const int no)
    {
        cerr << "Wrong option. Please try again." << endl;
        menu();
    }

    return val[in - 1];
}
