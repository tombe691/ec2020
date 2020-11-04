#include	<stdio.h>
#include	<string.h>
#include	<ctype.h>
#include	<locale.h>
#include	<stdlib.h>
//#include "mystring.h"		//	innehåller open_file

void fskip_line(FILE	*f) {
  int	c;
  while ( (c =	fgetc(f)) != '\n'	&&	c != EOF	) //Läs in tecken	så	länge	som tecken inte är radslut	eller	EOF. I klartext hoppar över blanktecken etc.
	 ;	 
}

_Bool	remove_nl(char	*a) {
  int	i = strlen(a)-1; //I	= längden av filen -1
  if (a[i] == '\n') { //tar bort	radbrytningar och	ersätter	med null	tecken/stopptecken \0
	 a[i]	= '\0';
	return 1;
  }
  return	0;
}

_Bool	fread_line(char *a, int	n,	FILE *f)	{ //anropet	kommer via en pekare	a till filen, n =	antal	tecken, läs	in	från fil	via pekare till filen
  if (fgets(a,	n,	f)	==	NULL)	//Läser från textfältet	a,	n = antal 100,	f = pekare som	anger	läsa från/till. Om NULL	returnera 0.
	 return 0;
  if (!remove_nl(a))	//Om funktion remove_nl	behöver ta bort radbrytningar	och ersätta	med null	tecken/stopptecken så gör
	fskip_line(f);	//Anropa	funktion	och skicka med	pekare för att	ta	bort hoppa över resten av raden
  return	1;	 
}

_Bool	read_line(char	*a, int n) {
  return	fread_line(a, n, stdin); //Anropar funktionen fread_line med parametrarna a =	pekare till	filen	med namnet name och skickar med antal n =	100
}

FILE *open_file(const char	*text, const char	*mode) {	//Tar	emot argument,	två pekare *text och	*mode
  char name[100];	//Lokalt teckenfält name med plats för	100 tecken 
  printf("%s ", text); //Skriver	ut	fältet text	dvs filens namn
  read_line(name,	100);	//Anropar funktionen	read_line med fältet	filnamnet name	som parameter
  FILE *f =	fopen(name,	mode); //Öppna	filen	namn för	läsning (mode = r)
  if (f == NULL) { //Om	filen	saknas
	 printf("Kan inte öppna filen %s", name);	//Ge meddelande till	att filen saknas
	 exit(1);
  }
  return	f;
}

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