

#include<iostream>
using namespace std;

//byt ut struct till class
//struct
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

    void setId(int id);/* {
        Id = id;
    }*/

    // printid info defined inside class definition
    void printinfo()
    {
        cout << "Employee id is: " << Id << "Name is: " << Name
        << "Age is: " << Age << "Salary is: " << Salary << endl;
    }

};

void Employee::setId(int id) {
    Id = id;
}

void Employee::printname()
{
    cout << "Employee name is: " << Name;
}

int main()
{
    int i;
    int id;
    Employee Emp[ 3 ];         //Statement   1
    for(i=0;i<3;i++)
    {
        cout << "\nEnter details of " << i+1 << " Employee";
        cout << "\n\tEnter Employee Id : ";
        cin >> id;
        Emp->setId(id);
        cout << "\n\tEnter Employee Name : ";
        cin >> Emp[i].Name;
        cout << "\n\tEnter Employee Age : ";
        cin >> Emp[i].Age;
        cout << "\n\tEnter Employee Salary : ";
        cin >> Emp[i].Salary;
    }
    cout << "\nDetails of Employees" << endl;
    for(i=0;i<3;i++) {
       // cout << "\n"<< Emp[i].Id <<"\t"<< Emp[i].Name <<"\t"
         //    << Emp[i].Age <<"\t"<< Emp[i].Salary;
        Emp[i].printinfo();
    }
}
