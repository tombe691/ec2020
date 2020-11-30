// smallobj.cpp
// demonstrates a small, simple object with problems..
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class person //define a class
{
private:
public:
  string name1;
  int age; //class data
  float salary;
};
////////////////////////////////////////////////////////////////
int main()
{
    person p1, p2; //define two objects of class person
    p1.age = 32; //giving value to the properties
    p1.name1 = "kalle";
    p1.salary = 23456,78;
    cout << p1.name1; //printing the values stored
<<<<<<< HEAD
    return 50;
=======
    return 2;
>>>>>>> ac98428fdaea045c584a6f5859c7c3dae7f2ddb5
}
