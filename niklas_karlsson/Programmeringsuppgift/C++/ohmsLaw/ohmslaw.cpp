#include "ohmslaw.hpp"

// Constructor
ohmsLaw::ohmsLaw(void)
{
	// what we want to be run first
}

// What we want to be run last
// So we run the calculation lastly.. :)
// Destructor
ohmsLaw::~ohmsLaw(void)
{
	// Reset to zero
	if ((ohms.R == 0) && (ohms.I == 0) && (ohms.P == 0) && (ohms.U == 0))
    {
		cout << "Everything had been reset. Please try again!" << endl;
	}
    else
    {
		// with impedance / ampere
		if ((ohms.R > 0) && (ohms.I > 0))
        {
			if (ohms.U == 0)
            {
				// U = R * I
				ohms.U = ohms.R * ohms.I;
			}

			if (ohms.P == 0)
            {
				// P = R * (I^2)
				ohms.P = ohms.R * pow(ohms.I, 2);
			}
		}
        else if ((ohms.U > 0) && (ohms.I > 0))
        {
			if (ohms.R == 0)
            {
				// R = U / I
				ohms.R = ohms.U / ohms.I;
			}

			if (ohms.P == 0)
            {
				// P = U * I
				ohms.P = ohms.U * ohms.I;
			}
		}
        else if ((ohms.P > 0) && (ohms.I > 0))
        {
			if (ohms.R == 0)
            {
				// R = P / (I^2)
				ohms.R = ohms.P / pow(ohms.I, 2);
			}

			if (ohms.U == 0)
            {
				// U = P / I
				ohms.U = ohms.P / ohms.I;
			}
		}
        else if ((ohms.U > 0) && (ohms.P > 0))
        {
			if (ohms.I == 0)
            {
				// I = P / U
				ohms.I = ohms.P / ohms.U;
			}

			if (ohms.R == 0)
            {
				// R = (U^2) / P
				ohms.R = pow(ohms.U, 2) / ohms.P;
			}
		}
        else if ((ohms.R > 0) && (ohms.P > 0))
        {
			if (ohms.I == 0)
            {
				// I = sqrt(P / R)
				ohms.I = sqrt(ohms.P / ohms.R);
			}

			if (ohms.U == 0)
            {
				// U = sqrt(P * R);
				ohms.U = sqrt(ohms.P * ohms.R);
			}
		}
        else if ((ohms.R > 0) && (ohms.U > 0))
        {
			if (ohms.I == 0)
            {
				// I = U / R
				ohms.I = ohms.U / ohms.R;
			}

			if (ohms.P == 0)
            {
				// P = (U^2) / R
				ohms.P = pow(ohms.U, 2) / ohms.R;
			}
		}

		cout << "ohms law says: " << endl
			 << "Resistance is: " << ohms.R << endl
			 << "Ampere is: " << ohms.I << endl
			 << "Watt is: " << ohms.P << endl
			 << "Voltage is: " << ohms.U << endl;
	}

    // We done. Reset it.
	ohms.R = 0;
	ohms.I = 0;
	ohms.P = 0;
	ohms.U = 0;
}

int ohmsLaw::menu(int exclude)
{
	int value;

	// 1 = Resistance   R
	// 2 = Amps         I
	// 3 = Watt         P
	// 4 = Volt         U

	cout << "1. (R) Resistance" << endl
		 << "2. (I) Ampere" << endl
		 << "3. (P) Watt" << endl
		 << "4. (U) Voltage" << endl;

    // Wait for input.
    cin >> value;

    // If any error occurred.
    while (cin.fail())
    {
		cout << "You typed \"" << value << "\" instead of a number." << endl;
		cout << "Please try again." << endl;
        // Clear buffer and erase error flag
        cinner();
        cin >> value; // Try again
    }

    // Better to loop while we can. he he he..
    while (true)
    {
        if ((value < 1) || (value > 4))
        {
            cout << "Value must be within 1 and 4." << endl
        		 << "Plase try again!" << endl;
            // Clear buffer and erase error flag
            cinner();
            cin >> value; // Try again
            continue;
        }
        else if (exclude == value)
        {
            cout << "You cannot pick the same unit twice." << endl
            	 << "Plase try again!" << endl;
            // Clear buffer and erase error flag
            cinner();
            cin >> value; // Try again
            continue;
        }
        else
        {
            // Look for values (1 - 4)
            // And assign value to a struct.
            if (value == 1)
            {
                cout << "Enter Resistance: " << endl;
                cin >> ohms.R;  // Throw it in there.
                break;          // DONE. GO OUT!!
            }
            else if (value == 2)
            {
                cout << "Enter Amepere: " << endl;
                cin >> ohms.I;  // Throw it in there.
                break;          // DONE. GO OUT!!
            }
            else if (value == 3)
            {
                cout << "Enter Watt: " << endl;
                cin >> ohms.P;  // Throw it in there.
                break;          // DONE. GO OUT!!
            }
            else if (value == 4)
            {
                cout << "Enter Voltage: " << endl;
                cin >> ohms.U;  // Throw it in there.
                break;          // DONE. GO OUT!!
            }
        }
    }
    // Return the value. hopefully right one.
	return value;
}

// Yesh, sinner.. but for cin.. get it? :D
void ohmsLaw::cinner(void)
{
    // Clear to get rid of error flag.
    cin.clear();
    // Takes out 65000 characters from buffer and stops if it encounter
    // new line.
    cin.ignore(INT_MAX, '\n');
}
