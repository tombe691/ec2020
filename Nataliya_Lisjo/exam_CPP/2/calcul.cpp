//Date        : 12/8/2020
//File        : calcul.cpp
//Description : MathProgram exercises , digit interval (0-20) .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------

#include "calcul.h"
#include <iostream>
using namespace std;
//------------------------------

int madeChoose() {
    int choose;
    cout << "You can choose : " << endl;
    cout << "1 . to practice; " << endl;
    cout << "2 . to test; " << endl;
    cout << "3 . end the program. " << endl;
    cout << "Do your choose ! - ";
    cin >> choose;
    return choose;
}
int madeCh(){
    int ch;
    cout << " 1. addition; " << endl;
    cout << " 2. subtraction;  " << endl;
    cout << " 3. multiplication;" << endl;
    cout << " 4. mixed exercises " << endl;
    cout << "Do your choose ! - ";
    cin >> ch;
    return ch;
}
//__________practice calculator_________
int Summa() {
    system("cls");
    int answer, res;
    int a = rand() % 21;
    int b = rand() % 21;
    cout << a << " + " << b << " = " << endl;
    cout << "Your answer = ";
    cin >> answer;
    res = a + b;
    if (answer == res) { cout << " Perfect !" << endl; }
    else {
        cout << " No, try again. your answer = ";
        cin >> answer;
    }
    return res;
}
int Minus(){
    system("cls");
    int answer, res;
    int a = rand() % 21;
    int b = rand() % 21;
    cout << a << " - " << b << " = " << endl;
    cout << "your answer = ";
    cin >> answer;
    res = a - b;
    if (answer == res) { cout << " Perfect !" << endl; }
    else {
        cout << " No, try again. your answer = ";
        cin >> answer;
    }
    return res;
}
int Multiplay(){
        system("cls");
        int answer, res;
        int a = rand() % 21;
        int b = rand() % 21;

        cout << a << " * " << b << " = " << endl;
        cout << "your answer";
        cin >> answer;
        res = a*b;
        if (answer == res) { cout << " Perfect !" << endl; }
        else {
            cout << " No, try again. your answer = ";
            cin >> answer;
        }
    return res;
}
//__________test calculator___________
int testSumma()  {
    system("cls");
    int test_res;
    int answer, res;
    int a = rand() % 21;
    int b = rand() % 21;
    cout <<  a << " + " << b << " = " << endl;
    cout << "Your answer = ";
    cin >> answer;
    res = a + b;
    if (answer == res) { test_res = 1; }
    if (answer !=res)  { test_res = 0; }

    return test_res;
}
int testMinus(){
    system("cls");
    int test_res;
    int answer, res;
    int a = rand() % 21;
    int b = rand() % 21;
    cout << a << " - " << b << " = " << endl;
    cout << "your answer = ";
    cin >> answer;
    res = a - b;
    if (answer == res) { test_res = 1; }
    if (answer !=res)  { test_res = 0; }

    return test_res;
}
int testMultiplay(){
    system("cls");
    int test_res;
    int answer, res;
    int a = rand() % 21;
    int b = rand() % 21;

    cout << a << " * " << b << " = " << endl;
    cout << "your answer";
    cin >> answer;
    res = a*b;
    if (answer == res) { test_res = 1; }
    if (answer !=res)  { test_res = 0; }

    return test_res;
}

