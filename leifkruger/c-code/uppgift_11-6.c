/******************************************************************************
* FILENAME		: uppgift_11-6.c
*
* Encoding		: UTF-8
*
* DESCRIPTION	: .
*
* FUNCTIONS		: .
*
* NOTES			: Menu language - Swedish
*
*				https://javatutoring.com/c-program-find-maximum-minimum-element-in-array/
*
*				  Copyright L.Krüger 2020.  All rights reserved.
*
* AUTHOR		: Leif Krüger, info@leifkruger.se
*
* CHANGES
*
* REF NO	VERSION		DATE (YYMMDD)  WHO	DETAIL
* -----------------------------------------------------------------------------
*			1           2020-10-20     LK   Start date
*
*******************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

void minmaxNumber(double a[], int n)
{
 	double min, max;
	min=a[0], max=a[0];
	for(int i=1; i<n; i++) {
		if(min>a[i]) {
			min=a[i];
		}   
		if(max<a[i]) {
			max=a[i];
		}       
    }
    
    printf("Min-värde: %.2lf \n",min);
    printf("Max-värde: %.2lf",max);
}
 
int main()
{
    double a[1000];
	int i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%lf", &a[i]);
    }
    minmaxNumber(a,n);    
}




/*

int main() {
	char selectedFile[100];
	printf("Ange filens namn du vill skriva ut i terminalfönstret: ");
	scanf("%s", selectedFile);
	FILE *infile = fopen(selectedFile, "r"); //Open file, reading mode
	if (infile == NULL) {
		printf("Kan tyvärr inte hitta filen %s", selectedFile);
		exit(1);
	}
	int c;
	while ((c = fgetc(infile)) != EOF) { //
		if (c == '\t') { //Replace tab character with 3 spaces
			printf("   ");
		} else {
			putchar(c);
		}
	}
	fclose(infile);
	return 0;
}

*/
