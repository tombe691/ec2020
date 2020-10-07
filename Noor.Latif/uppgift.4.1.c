 /*
 ============================================================
 Name		: uppgift.4.1.c
 Author		: Noor Latif
 Description: Outputs largest and smallest numbers entered.
 Date		: 2020-09-28
 ============================================================
 */

#include <stdio.h>
#define MAX 2147483647
#define MIN -2147483648
int main() {
    int largest = MIN, smallest = MAX, userNumber;
	printf("Hej %s! Välkommen till mitt program.\n\n", getenv("USERNAME"));
    while (1) {
        printf("Enter number. (Input EOF to exit): ");
        if (scanf("%d", &userNumber) !=1) /*if scanf detects EOF; exit*/
            break;
        if (userNumber > largest) 
            largest = userNumber;
        if (userNumber < smallest)
            smallest = userNumber;
    }
    printf("Smallest: %d\nLargest: %d", smallest, largest);
}
