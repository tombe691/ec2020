//Date        : 12/10/2020
//File        : main.cpp
//Description : Bankomat program med security pin; withdraw och deposit money ; save in file date , .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------

#include <iostream>
#include "bank.h"
using namespace std;


 int main () {
     system("CLS");
     bank Bank_Account;
     bool Ok=true;
     while(Ok==1) {

         system("CLS");
         // if(Bank_A.User->account()) Bank_A.Menu();

         int menu_choose=1;

         Bank_Account.processed();
         while (menu_choose<0||menu_choose>5)
         cin >> menu_choose;
         int money;
             switch (menu_choose) {
                 case 1:
                     system("CLS");
                   // Bank_Account.readIn();
                     Bank_Account.User->New->Show_info();
                     cout << "Do you want to go back to menu? \t 1: Menu;\t 2: Exit" << endl;
                     int ch;
                     while (Ok) {
                         cin >> ch;
                         if (ch == 1) {
                             Ok=0;
                            // Bank_Account.processed();
                             continue;
                         }
                         else if (ch == 2) {
                             cout << "Have a nice day" << endl;
                             Bank_Account.go_exit();
                         } else cout << "Error/ Try again" << endl;
                     }
                     break;
                 case 2:
                     system("CLS");
                     cout << "How much money you want to put? Enter amount: \n";
                     cin >> money;
                     Bank_Account.User->New->add_money(money);
                     cout << "Now you have  " << Bank_Account.User->New->add_money(money) << "  in your account"
                          << endl;
                     cout << "Do you want to back to menu? \t 1: Menu;\t2: Exit" << endl;

                     while (Ok) {
                         cin >> ch;
                         if (ch == 1) { Ok=0;
                         //Bank_Account.processed();
                         continue;}
                         if (ch == 2) {
                             cout << "Have a nice day" << endl;
                             Bank_Account.go_exit();
                         } else cout << "Error/ Try again" << endl;
                     }
                     break;
                 case 3:
                     system("CLS");
                     cout << "How much money you want to draw? \n";
                     cin >> money;
                     if (Bank_Account.User->New->withdraw_money(money) < money) {
                         cout << "You don't have enough money to draw it" << endl;
                         Bank_Account.processed();
                     } else Bank_Account.User->New->withdraw_money(money);
                     cout << "Now you have in your account : " << endl;
                     Bank_Account.User->New->Show_info();
                     cout << "Do you want to back to menu? \t 1: Menu;\t2: Exit" << endl;

                     while (Ok) {
                         cin >> ch;
                         if (ch == 1) { Ok=0;
                             //Bank_Account.processed();
                             continue;}
                         if (ch == 2) {
                             cout << "Have a nice day" << endl;
                             Bank_Account.go_exit();
                         } else cout << "Error/ Try again" << endl;
                     }
                     break;
                 case 4:
                     cout << "Have a nice day" << endl;
                     Bank_Account.go_exit();
             }
        // } while (menu_choose != 4);
     }
 }





