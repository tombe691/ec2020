/*_______________________________________________
 Name		  : Indexfunk.c
 Author	  	  : Eric Åshede
 Description  : Innehåller funktioner för indexberäkningar
 Date	  	  : 2020-10-12
_________________________________________________
*/
#include "indexfunk.h"

double sum_index(double x[], int n){
	double sum;
	for(int i=0; i<n; i++){
	  sum += x[i];
	}
	return sum;
}

double sum_kvad_index(double x[], double n){
	double sum;
	for(int i=0; i<n; i++){
		sum += x[i] * x[i];
	}
	return sum;
}