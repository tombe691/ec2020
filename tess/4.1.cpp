#include <iostream>
using namespace std;

struct phone {
    int areacode;
    int exchange;
    long number;
};
int main(){

    phone nr1 = {212,767,8900};
    phone nr2;

    cout << "\nEnter your area code, exchange and number:  \n";
    cin >> nr2.areacode >> nr2.exchange >> nr2.number;
    cout << "My number is: " << "(" << nr1.areacode << ") " << nr1.exchange << "-" << nr1.number<< "\n";
    cout << "Your number is: " << "(" << nr2.areacode << ") " << nr2.exchange << "-" << nr2.number<< "\n";
    return 0;
}