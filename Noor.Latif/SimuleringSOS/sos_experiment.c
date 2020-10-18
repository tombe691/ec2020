 /*===========================================================.
||	Name		: sos experiment.c			
||	Author		: Noor Latif, noor@latif.se	
||	Date		: 2020-10-03				
||____________________________________________________________
||	C Embedded	: EC Utbildning				
||	Handledare	: Tomas Berggren			 
 `============================================================*/
/* Program Description:
This program lets you easily manipulate Morse letters to be repeated
To send a morse signal, simply write the letter x inside the function: morse('x');
The function is case insensitive.
*/
#include <stdio.h>
#include <windows.h>
/* Function */
void morse(char letter);
/* Main program */
int main(void) {
	
	while(1) {
		system("cls");	/*Clear the console at start of loop.*/
		morse('S');
		morse('O');
		morse('S');
		printf("\nCongratulations %s! You are being rescued!\n\tPlease do not resist. •ᴗ•\n", getenv("USERNAME"));
		Sleep(2000);	/*This delay signifies end of word.*/
	}
}

/*
-Morse Translator function- (in switch style)
*/
void morse(char letter) {
	int i = 0;
	switch (letter) {
	case 'S':						/*Both letters s and S jumps into the for-loop case.*/
	case 's':
		for(i = 0; i < 3; i++) {
			printf(".");			/*This For repeats 3 times to represent the letter S.*/
			Beep(450,100);
		}
		Sleep(150);	 				/*This delay signifies the end of letter.*/
		break;
	case 'O':
	case 'o':
		for(i = 0; i < 3; i++) {
			printf(" _ ");			/*This For repeats 3 times to represent the letter O.*/
			Beep(450,300);
		}
		Sleep(150);
		break;
	default: 						/*Morse code error catch for unsupported letters. Then exits the whole program.*/
		printf("Error! Input %c is not supported. Shutting down.", letter);
		exit(0);
	}
}
