#include <stdio.h>

/* The Function we defined to reverse the given number */
int ReverseTheNumber(int Number) {
	int Reverse_Number = 0;
	while(Number > 0) { /* Loops untill the number is > 0 */
		Reverse_Number = Reverse_Number*10 + Number%10;
		Number = Number/10;
	}
	return Reverse_Number; /* Returning our reversed number */
}

int main() {
	int Number;
	printf("Enter the number to be reversed: ");
	scanf("%d", &Number);
	printf("Reverse of no. is %d", ReverseTheNumber(Number)); 
	return 0;
}