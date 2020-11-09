#include <iostream>
#include "ohm.h"

void init(Ohm& ohm) {
	int validOptions[] = { 1, 2, 3, 4 };
	int input = validateInput<int>(MENU, validOptions, 4);
	switch (input)
	{
	case 1:
		ohm.current = validateInput<float>("Input current: ");
		ohm.resistance = validateInput<float>("Input resistance: ");
		ohm.volt = VOLT(ohm.current, ohm.resistance);
		break;
	case 2:
		ohm.volt = validateInput<float>("Input voltage: ");
		ohm.resistance = validateInput<float>("Input resistance: ");
		ohm.current = CURR(ohm.volt, ohm.resistance);
		break;
	case 3:
		ohm.volt = validateInput<float>("Input voltage: ");
		ohm.current = validateInput<float>("Input current: ");
		ohm.resistance = RES(ohm.volt, ohm.current);
		break;
	default:
		std::cout << "Exiting..." << std::endl;
		exit(0);
		break;
	}
	system("cls");
}

template <typename T> 
T validateInput(std::string menu, T *params, const int n) {
	T input;
	bool failed;
	do {
		std::cout << menu;
		std::cin >> input;
		failed = std::cin.fail();
		for (size_t i = 0; i < n; i++) {
			if (params[i] == input) {
				failed = false;
				break;
			}
			failed = true;
		}
		if (failed) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Oh no, something happened!" << std::endl
				<< "Press <ENTER> to continue..." << std::endl;
			while (std::cin.get() != '\n');
			system("cls");
		}
	} while (failed);
	return input;
}

template <typename T>
T validateInput(std::string message) {
	T input;
	bool failed;
	do {
		std::cout << message;
		std::cin >> input;
		failed = std::cin.fail();
		if (failed) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Oh no, something happened!" << std::endl
				<< "Press <ENTER> to continue..." << std::endl;
			while (std::cin.get() != '\n');
			system("cls");
		}
	} while (failed);
	return input;
}