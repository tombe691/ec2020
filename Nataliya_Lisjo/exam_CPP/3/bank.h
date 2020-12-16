//Date        : 12/10/2020
//File        : bank.h
//Description : Bankomat program med security pin; withdraw och deposit money ; save in file date , .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------

#ifndef INC_3_BANK_H
#define INC_3_BANK_H

#include <string>
#include <iostream>
using namespace std;

class Account {
private:
    char password[5];
    long balance;
    char user_account[13];
public:
    Account() {
        cout << "\nWelcome to InternetBank !\n ";
        cout << "====================================\n";
        cout << "What do you want to do :\n";
        cout << "1. open new account\n";
        cout << "2. go to your account\n";
        cout << "====================================\n";
        int val;
        cin>> val;
        if (val==1){ Open_account();}
        if (val==2){ Enter_to_your_account();}

    }

    void Open_account();
    long &withdraw_money(int m);
    long &add_money(int m);
    void Show_info();
    bool Enter_to_your_account();
};
class Client: public Account {
public:   Account *New;
          char person[50];
          char address[50];

    Client() {
        New = new Account;
        cout << "Enter your  FirstName and Lastname" << endl;
        cin.getline(person, 50);
        cout << "Enter your address " << endl;
        cin.getline(address, 50);
    }
    ~Client() {
        delete New;
    }

};
class bank:  public Client {
    public:
         Client *User;
                  //constructor
        bank() {
            User = new Client;
            User->New->Open_account();
            writeIn();
        }

        //destructor
        ~bank() {
            delete User;
        }
        void go_exit();
        int processed();

      //  int Menu();
        void readIn(int);
        void writeIn();
    };

#endif //INC_3_BANK_H
