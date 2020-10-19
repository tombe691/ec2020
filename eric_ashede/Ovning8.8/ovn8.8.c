/*_______________________________________________
 Name	      : ovn8.8
 Author	  	  : Eric Åshede
 Description  : Skapa tvådimentionell array som skriver ut multiplikationstabell
 Date	  	  : 2020-10-14
_________________________________________________
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
	//skapa tvådimensionell array
	int multiplikation_tabell[N][N];
	//indexera
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
		multiplikation_tabell[i][j] = (i+1)*(j+1);
	//printa resultat
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++)
			printf("%d ", multiplikation_tabell[i][j]);
	printf("\n");
	}
}