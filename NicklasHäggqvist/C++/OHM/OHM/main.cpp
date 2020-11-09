#include <iostream>
#include "ohm.h"

using namespace std;

int main(void) {
	Ohm ohm = Ohm();
	while (true) {
		init(ohm);
		cout << "Volt: " << ohm.volt << endl
			<< "Current: " << ohm.current << endl
			<< "Resistance: " << ohm.resistance << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Press <ENTER> to continue..." << endl;
		while (cin.get() != '\n');
		system("cls");
	}
}