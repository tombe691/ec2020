//Date        : 12/7/2020
//File        : pets.cpp
//Description : Program ask user name, age and sex of a pet .
//Author      : Nataliya Lisjö//.nat
//-------------------------------------------------------------------------

#include "pets.h"
#include <iostream>


    char Pets:: setPetsName(){
        cout<<"\n Name? ";
        cin >> Name;
    }
    char Pets::getPetsName(){
        cout << Name;
    }
    int Pets::setPetsAge(){
        cout << "Age " << getPetsName()<<" ? " ;
        cin >> Age;
    }
    int Pets:: getPetsAge(){
        cout <<Age ;
    }
    void  Pets:: setSex(){
        cout<< "Is your pet en female  (j/n)? " ;
        char answer;
        cin>> answer;
        if(answer=='j'||answer=='J')
        {
            IsFemale= true;
        }

    }
    int Pets:: getSex(){
        if (IsFemale==1 )
            cout << " girl ! " <<endl;
        else
            cout<<"boy ! "<<endl;

    }

