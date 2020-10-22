#include <stdlib.h>

char *strpbrk(char *s1 , char *s2) {
  char *p1, *p2;
  for (p1 = s1; *p1; p1++)  {
		for (p2 = s2; *p2;)	
			if (*p1 == *p2++) 
				return p1;
	}
	return NULL;
}

// Testprogram, ingick inte i uppgiften
#include <stdio.h>
int main() {
  char a[30],b[30];
  printf("Skriv två ord\n");
  scanf("%s%s", a, b);
  char *r = strpbrk(a, b);
  if (r != NULL) {
    int i = r-a;
    printf("Finns på plats %d\n", i);
  }
  else
    printf("Finns inte\n");
}
