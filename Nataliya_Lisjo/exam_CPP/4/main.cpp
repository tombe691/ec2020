//Date        : 12/12/2020
//File        : main.cpp
//Description : program that reads data for six temperature sensors in a house .
//Author      : Nataliya Lisjö//.nat
//Version    : 1.1
//-------------------------------------------------------------------------


//#include "temp.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int t;
    vector<pair<string,string>> myhouse = {
            {"kitchen",   "fl1" },
            {"livingroom","fl1" },
            {"bedroom",   "fl2" },
            {"bathroom",  "fl2" },
            {"laundry",   "fl0" },
            {"basement",  "fl0" }};


    //open file
    ifstream in;
    in.open("temp.txt");
    string line;

    vector <int> temp={t};//{"t[0],"t[1]","t[2]","t[3]","t[4]","t[5]" };



   for (int i = 0; getline(in, line); i++) {
                vector<int> row;
                for (int t = 0; t < line.size(); t++) {
                    row.push_back(line[t]);
                }
                myhouse.push_back(row);
            }



    // --- print
    cout << " room " << " floor " << " temperature " << endl;

    sort (myhouse.begin(),myhouse.end(), greater<int>());
        for (int i=0; i<6; i++){
            for (t=0; t<6; t++) {
                if (t < 0) {
                    cout << myhouse[i] << ' ' << " thermometer registered values below 0 degrees" << endl;
                }
                if (t > 0 && t <= 10) {
                    cout << myhouse[i] << ' ' << " thermometer registered values  between 1-10 degrees" << endl;
                }
                if (t > 10 && t <= 20) {
                    cout << myhouse[i] << ' ' << " thermometer registered values between 11-20 degrees" << endl;
                }
                if (t > 20 && t <= 30) {
                    cout << myhouse[i] << ' ' << " thermometer registered values between 21-30 degrees" << endl;
                }
                if (t > 30) {
                    cout << myhouse[i] << ' ' << " thermometer registered values over 30 degrees" << endl;

                }
            }
        }
        return 0;


    }
