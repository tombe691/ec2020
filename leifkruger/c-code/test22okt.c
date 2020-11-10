#include <stdio.h>

void main() {
    char a[] = {'L', 'e', 'i', 'f'};
    
	int x = 42;
	
	int *p = &x;
	
	printf("Adressen är: %d %d\n", x, *p);
	
	*p = 34;
	
	printf("Adressen är: %d %d adress %d \n", x, *p, p);
	
}