#include "ohmslaw.hpp"

using namespace std;

int main(void)
{
	// initialize the class
	ohmsLaw ohm;
    // Declare variables
	int firstChoice, secondChoice;
    // Print once.
	cout << "Welcome to ohms law converter." << endl
		 << "For this converter to work you'll need atleast two types."
		 " (R, I, P and/or U)"
		 << endl;
    // Make a function for this later on.
	firstChoice = ohm.menu(0);
	secondChoice = ohm.menu(firstChoice);
    // Caller process will get this.
	return 0;
}
