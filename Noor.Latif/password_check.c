
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

 /*
 ============================================================================
 Name		: password_check.c
 Author		: Noor Latif
 Description: Checks the user entered password against specified conditions.
 Date		: 2020-10-06
 ============================================================================
 */

int main(){
	char password [50];
	int i;	/* for counting */
	_Bool lower = 0;
	_Bool uppercase = 0;
	_Bool digit = 0;

	printf("Enter a strong password!  \n");

	while(1){
		printf("your password should contain upper case letters, \n");
		printf("small case letters and numbers. \n");

		scanf("%s", password);
		/* 
		 * if the contents of password() is true according to (islower), 
		 * then set Bool = 1 (true) to run code inside if.
		 * islower returns false (0) when content is not lowercase.
		 * The if will then be skipped because its condition is 0 (false)
		 */
		for (i = 0; i < 50; i++){
			if (islower(password[i])){	/* [i] loops the password array from 0 to 49 to access up to 50 characters inside */
			lower = 1;					/* */
			break;
			}
		}

		for (i = 0; i < 50; i++){
			if (isupper(password[i])){
				uppercase = 1;
				break;
			}
		}

		for (i = 0; i < 50; i++){
			if (isdigit(password[i])){
				digit = 1;
				break;
			}
		}

		if ((lower * uppercase * digit) != 0){
			printf("You have entered a strong password. \n");
		}else{
			printf("You have entered a weak password. Please enter a new password! \n\n");
			continue;
        }
    }
}
