#include	<stdio.h>
#include	<string.h>
#include	<ctype.h>
#include	<locale.h>
#include	<stdlib.h>

int main() { //Deklaration	huvudfunktion.	Programstart.
  printf("\n"); //Lägger in en tomrad.	Blir lite snyggare när man	kör 
  FILE *f =	open_file("Filens namn?", "r"); //Anropar	funktion	open_file. "r"	öppnar fil för	läsning
  int	c;	//Initierar	variabel	c heltal

  /* Upprepa så länge tecken för	filslut EOF	inte förekommer */ 
  while ((c	= fgetc(f))	!=	EOF) { //Läser	ett tecken i taget och returnerar tecknet	som ett heltal	int 
	 if (c == '\t') //Om	inläst tecken är en tab
	  printf("   "); //Ersätt tab-tecknet och	skriv	ut	tre mellanslag	istället
	 else				  //annars
		putchar(c);	//Skriv ut inläst	tecken
  }
  printf("\n\n");	//Lägger	in	två tomrader. Blir lite	snyggare	när man kör
}


//Var	någonstans hittar	man fclose ???






_Bool tabortRadslutstecken(char textStrang[]) {
	int nollteckenPosition = strlen(textStrang)-1; //nollteckenPosition = index i positionen precis FÖRE nolltecken \0
	if (textStrang[nollteckenPosition] == '\n') { //Villkor om radslutstecken \n
		textStrang[nollteckenPosition] = '\0'; //Byt ut \n mot \0 (\0 kallas null character) 
		return 1; //Funktionen lämnar värdet 1 som resultat om villkoret är uppfyllt. Värdet bör vara lika med funktionens resultattyp
	}
	return 0; //Lämnar värdet 0 som resultat om if-satsen inte var ett
}

/*
Förklaringar:
Teckenfält är en behållare där man kan stoppa textsträngar i. Uppdelad  element.
Namnet på ett fält alltid är en pekare.
Ex
textStrang[] är ett teckenfält (character array).
textStrang är en pekare till teckenfältet.

Se också: https://overiq.com/c-programming-101/array-of-strings-in-c/

*/