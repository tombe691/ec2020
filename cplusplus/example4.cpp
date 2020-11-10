

// smallobj.cpp
// demonstrates a small, simple object
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
    person(){}

    person(string name, int age2, float salary2)
    {
        name1 = name;
        age = age2;
        salary = salary2;
    }
    void setname(string name2) //member function to set data
    { name1 = name2; }
    void setage(int d) //member function to set data
    { age = d; }
    void showdata() //member function to display data
    { cout << "Name is " << name1 << " and age is " << age << endl; }
};
////////////////////////////////////////////////////////////////
int main()
{
    person p1, p2; //define two objects of class person
    person p3 = person("anna", 30, 20000.50);
    p1.setage(37); //call member function to set data
    p2.setage(45);
    p2.setname("kalle");
    p1.showdata(); //call member function to display data
    p2.showdata();
    p3.showdata();
    return 0;
}
