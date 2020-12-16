//Date        : 12/10/2020
//File        : bank.cpp
//Description : Bankomat program med security pin; withdraw och deposit money ; save in file date , .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------

#include "bank.h"
#include <iostream>
#include <fstream>
#include<cstring>
#include <ctime>
using namespace std;

//main menu
int bank::processed() {
    int ch;

    cout << "\n====================================\n";
    cout << "What do you want to do :\n";
    cout << "1. Display the current balance. \n";
    cout << "2. Deposit money.  \n";
    cout << "3. Withdraw money.  \n";
    cout << "4. Exit.  \n";
    cout << "====================================\n";
    cin >> ch;
    return ch;

}

//----------------bank--------
//write in file and exit
void bank::go_exit() {
    writeIn();
    exit(0);
}

//read file,person
void bank::readIn(int person) {
    ifstream infile("BANK_DATA.txt");
    infile.open("BANK_DATA.txt", ios::binary);
    infile.seekg((person * sizeof(Client)));
    infile.read((char *) this, sizeof(*this));

}

//write in the end of file
void bank::writeIn() {
    ofstream outfile("BANK_DATA.txt");
    outfile.open("BANK_DATA.txt", ios::app | ios::binary);
    outfile.write((char *) this, sizeof(*this));
}

//----------account-----------
//create account
void Account::Open_account() {
    int k;
    srand(time(0));
    for (int i = 0; i < 12; i++) {
        user_account[i] = rand() % 10 + 48;
    }
    user_account[12] = '\0';
    cout << "Your account " << user_account << endl;
    k = 1234;
    itoa(k, password, 10);
    password[4] = '\0';
    cout << "Your  password is :" << password << endl;

}
bool Account::Enter_to_your_account() {
    char pin_code[5];
    int times = 0;
    cout << "Welcome . Enter password to your account" <<endl;
    while (times < 3) {
        cin >> pin_code;
        if (strcmp(pin_code,password) == 0)  {
            cout << "Welcome in your account!" << endl;
            return 1;
        } else
            cout << "Error try again." << endl;
        times++;
    }
    if (times == 3)
        cout << "Error you try to enter your password 3 times, your account is blocked." << endl;
    return 0;
}
void Account::Show_info() {
    cout << "Your account " << user_account << endl;
    cout << "Your money " << balance << endl;
}

long &Account::withdraw_money(int m) {
    balance -= m;
    return balance;
}

long &Account::add_money(int m) {
    balance += m;
    return balance;
}

