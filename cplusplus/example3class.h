#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class person //define a class
{
private:
  string name1;
  int age; //class data
  float salary;

public:
  void setname(string name2); //member function to set data
  void setage(int d); //member function to set data
  void showdata(); //member function to display data
};
