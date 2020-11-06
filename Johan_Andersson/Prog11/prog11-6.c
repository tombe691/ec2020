//Johan Andersson, Ec2020, J-Azon @ github.com "2020-10-21"

#include <stdio.h>

//Funktion som ger minsta och hösta värde ur en sträng med hjälp av pekare.
void min_max(double *field, int length, double *minvalue, double *maxvalue){
	*minvalue = *field;
	*maxvalue = *field;
	for(double *pointer = field; pointer < field + length; pointer++){
		if(*pointer < *minvalue){	// Kontrollerar minsta värde
			*minvalue = *pointer;
		}
		if(*pointer < *maxvalue){	// Kontrollerar maxi värde
			*maxvalue = *pointer;
		}
	}
}
int main () {
	// Testfunktion, svaren som skall visas är 1 = Smallest, 10 = Highest
	double value1, value2;
    double testvector[10] = { 5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
	//Ger värden till funktionen
	min_max(testvector, 10, &value1, &value2);
	//Ger resultat
	printf("Smallest number = %.2f\tHighest number = %.2f\n", value1, value2);
}