#include	<stdio.h>
#include	<string.h>
#include	<ctype.h>
#include	<locale.h>
#include	<stdlib.h>




/*==============================================================================
Function name:	flasLinje
Type:			Textsträng
Function:		Läser en hel textsträngsrad.

Comments:
a)				Parametrarna pekarevariabelnamn och storleken på teckenfältet.
				*pekarevariabelnamn samma sak som pekarevariabelnamn[]
				

b)				Anropar funktionen flasLinje med parametrarna. 
				a namnet på	pekare till	textsträngen med namnet textstrangnamn. 
				n är antal bestämda element i teckenfältet.
				stdin innebär i praktiken inläsning från tangentbordet.	


Referens:		

*/

_Bool	lasLinje(char *pekarevariabelnamn, int n) { //Comment a
  return	flasLinje(a, n, stdin); //Comment b
}
  
  //Alternative
_Bool	read_line(char *a, int n) {
  return	fread_line(a, n, stdin); 
}


/*==============================================================================
Function name:	lasLinje
Type:			Textsträng
Function:		Läser en hel textsträngsrad.

Comments:
a)				Parametrarna filnamn (en pekare) och storleken på teckenfältet.

b)				Anropar funktionen flasLinje med parametrarna. 
				a namnet på	pekare till	textsträngen med namnet textstrangnamn. 
				n är antal bestämda element i teckenfältet.
				stdin innebär i praktiken inläsning från tangentbordet.	


Referens:		

*/

_Bool	lasLinje(char *a, int n) { //Comment a
  return	flasLinje(a, n, stdin); //Comment b
}
  
  //Alternative
_Bool	read_line(char *a, int n) {
  return	fread_line(a, n, stdin); 
}


/*==============================================================================
Function name:	hoppaOverrestenavinlasningsbuffert
Type:			Enskilt tecken getchar
Function:		Vid anrop av denna funktion hoppar man över alla resterande 
				tecken i inläsningsbufferten. Endast ett tecken kommer på så 
				sätt vidare. Vid tryck på ENTER eller EOF sker inget överhopp.

Comments:

a)	c 			Lokalvariabel för ett tecken

b)	((c = getchar()) != '\n' &&	c != EOF) 
				Läs in ett tecken så länge som tecken inte är radslut eller EOF.

c)	; 			A null statement (consisting of just a semicolon) performs no 
				operations.

*/

void hoppaOverrestenavinlasningsbuffert(void) {
	int	c; //Comment a
	while ((c = getchar()) != '\n' &&	c != EOF) { //Comment b
		; //Comment c
	}
}

//Alternative
void skip_line(void) {
	int	c;
	while ((c = getchar()) != '\n' &&	c != EOF) { 
		;
	}
}


/*==============================================================================
Function namne:	filhoppaOverrestenavinlasningsbuffert
Type:			Enskilt tecken fil fgets
Function:		Vid anrop av denna funktion hoppar man över alla resterande 
				tecken i inläsningsbufferten. Endast ett tecken kommer på så 
				sätt vidare. Vid tryck på ENTER eller EOF sker inget överhopp.

Comments:

a)	c 			Lokalvariabel för ett tecken

b)	((c = fgetc(f)) != '\n' && c != EOF) {
				Läs in tecken	så	länge	som tecken inte är radslut 
				eller EOF. I klartext hoppar över blanktecken.

c)	;			A null statement (consisting of just a semicolon) performs no 
				operations.


Referens:		https://stackoverflow.com/questions/22155233/
				why-there-is-semicolon-after-loop-while
*/

void filhoppaOverrestenavinlasningsbuffert(FILE	*f) {
	int	c; //Comment a
	while ((c = fgetc(f)) != '\n' && c != EOF) { //Comment b	
		; //Comment c
	}	 
}

//Alternative
void fskip_line(FILE *f) {
	int	c; 
	while ((c = fgetc(f)) != '\n' && c != EOF) { 	
		; 
	}	 
}


/*==============================================================================
Function name:	tabortRadslutstecken
Type:			Enskilt tecken 
Function:		Teckenfält är en behållare där man kan stoppa textsträngar i. 
				Uppdelad  element. Namnet på ett fält alltid är en pekare.
				Ex
				textStrang[] är ett teckenfält (character array).
				textStrang är en pekare till teckenfältet.

Comments:

a)	 			nollteckenPosition = index i positionen precis FÖRE nolltecken \0
				dvs antal tecken i textsträngen - 1

b)				Villkor om radslutstecken \n

c)				Byt ut \n mot \0 (\0 kallas null character) 

d)				Funktionen lämnar värdet 1 som resultat om villkoret är uppfyllt. Värdet bör vara lika med funktionens resultattyp

e)				Lämnar värdet 0 som resultat om funktionen avslutas utan fel.

Referens:		https://overiq.com/c-programming-101/array-of-strings-in-c/
*/

_Bool tabortRadslutstecken(char textStrang[]) {
	int nollteckenPosition = strlen(textStrang)-1; //Comment a
	if (textStrang[nollteckenPosition] == '\n') { //Comment b
		textStrang[nollteckenPosition] = '\0'; //Comment c
		return 1; //Comment d
	}
	return 0; //Comment e
}

//Alternative
_Bool remove_nl(char	*a) {
  int	i = strlen(a)-1;
  if (a[i] == '\n') { 
	 a[i]	= '\0';
	return 1;
  }
  return	0;
}




//See as templates below


/*==============================================================================
Function name:	
Type:			
Function:		

Comments:
a)	

b)	

c)	


Referens:		

*/



//Alternative