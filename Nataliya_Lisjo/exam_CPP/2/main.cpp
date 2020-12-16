//Date        : 12/8/2020
//File        : main.cpp
//Description : MathProgram exercises , digit interval (0-20) .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "calcul.h"

using namespace std;


int main() {
    string name;
    int choose, ch;

    cout << " your name ? ";
    cin >> name;
    cout << "Welcome, " << name << "!" << endl;

    do { // mainmenu:
        choose = madeChoose() ;
        //-------------to practice--------------
        do {
            if (choose == 1) {
                cout << "Now, you can choose to do excesses :" << endl;
                ch = madeCh();
                //-------------calculator--------------
                if (ch == 1) {
                    int i = 1;
                    while (i <= 10) {
                        cout << i << ". " << Summa() << endl;
                        i++;
                    }
                    choose = madeChoose();
                }
                if (ch == 2) {
                    int i = 1;
                    while (i <= 10) {
                        cout << i << ". " <<Minus() << endl;
                        i++;
                    }
                    choose = madeChoose();
                }
                if (ch == 3) {
                    int i = 1;
                    while (i <= 10) {
                        cout << i << ". " <<Multiplay() << endl;
                        i++;
                    }
                    choose = madeChoose();
                }
                if (ch == 4) {
                   int i = 1;
                   while ( i<=10 ) {
                       int run =rand()%3;
                       switch (run) {
                           case 0: cout << i << ". " <<Summa() << endl; break;
                           case 1: cout << i << ". " <<Minus() << endl; break;
                           case 2: cout << i << ". " <<Multiplay()  << endl; break;
                       }
                      i++;
                   }
                   choose = madeChoose();
                }
            }
        }while(choose==1);


        //---------------to test ------------------
        do{
            if (choose == 2) {
                cout << "Now, you can choose to do test :" << endl;
                ch = madeCh();
                //-------------calculator--------------
                if (ch == 1) {
                    int r=0;
                    int i = 1;
                    while (i <= 15) {
                        cout << i << ". " ;
                        int test_res= testSumma();
                        if (test_res == 1) { r = r + 1; }
                        i++;
                    }
                    int procent = (100 * r)/15;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    cout << name<<", your test result :"<< "all : "<<i-1<<", right answer : " <<r<<", in procent %: "<<  procent <<endl ;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    choose = madeChoose();
                }
                if (ch == 2) {
                    int r=0;
                    int i = 1;
                    while (i <= 15) {
                        cout << i << ". " ;
                        int test_res= testSumma();
                        if (test_res == 1) { r = r + 1; }
                        i++;
                    }
                    int procent = (100 * r)/15;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    cout << name<<", your test result :"<< "all : "<<i-1<<", right answer : " <<r<<", in procent %: "<<  procent <<endl ;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    choose = madeChoose();
                }
                if (ch == 3) {
                    int r=0;
                    int i = 1;
                    while (i <= 15) {
                        cout << i << ". " ;
                        int test_res= testSumma();
                        if (test_res == 1) { r = r + 1; }
                        i++;
                    }
                    int procent = (100 * r)/15;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    cout << name<<", your test result :"<< "all : "<<i-1<<", right answer : " <<r<<", in procent %: "<<  procent <<endl ;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    choose = madeChoose();
                }
                if (ch == 4) {
                    int i = 1;
                    int r;
                    while ( i<=15 ) {
                        int test_res=0;
                        cout << i << ". " ;
                        int run =rand()%3;
                        switch (run) {
                            case 0:  test_res= testSumma() ; break;
                            case 1:  test_res= testMinus(); break;
                            case 2:  test_res= testMultiplay() ; break;
                        }
                        if (test_res == 1) { r = r + 1; }
                        i++;
                    }
                    int procent = (100 * r)/15;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    cout << name<<", your test result:"<< "all : "<<i-1<<", right answer: " <<r<<", in procent %:"<<  procent <<endl ;
                    cout<<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
                    choose = madeChoose();
                }
            }
        }while(choose==2);
    }while (choose != 3);
    return 0;
}