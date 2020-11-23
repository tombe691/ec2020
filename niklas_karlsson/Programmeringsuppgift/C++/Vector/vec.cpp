#include "vec.hpp"

using namespace std;

vec::vec(void)
{
}

vec::~vec(void)
{
    cout << "That's the end of this vector. Have a nice day!" << endl;
}

void vec::yesNo(void)
{
    do
    {
        char ch;
        cout << "The program is about to exit, do you want to try again (Y/N)?"
             << endl;

        cin >> ch;
        // cout << "You entered: " << ch << endl;
        if ((ch == 'y') || (ch == 'Y'))
        {
            counter();
        }
        // else if will just store the overflow. So if will exit. :)
        if (ch == 'n' || ch == 'N')
        {
            break;
        }

        cout << "Wrong answer, try again" << endl;
    } while (true);
}
void vec::counter(void)
{
    long ifs;

    cout << "How many digits shall we store? (ie 433): " << endl;
    cin >> is;

    while (is)
    {
        ifs = rand() % INT_MAX + 1;
        vect.push_back(ifs);
        is--;
    }

    list();
    yesNo();
}

void vec::list(void)
{
    cout << "The vector stores " << (int)vect.size() << " numbers " << endl
    << "And contains the numbers: " << endl;

    for (auto it = vect.begin(); it != vect.end(); it++)
    {
        cout << ' ' << *it << endl;
    }
}
