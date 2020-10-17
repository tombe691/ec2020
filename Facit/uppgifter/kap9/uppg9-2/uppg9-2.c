#include "mystring.h"
#include <string.h>

void baklanges(char *s1, const char *s2)
{
	int n = strlen(s2);
	int i = 0, j = n - 1;
	for (; i < n; i++, j--)
		s1[i] = s2[j];
	s1[i] = '\0';
}

int main()
{
	printf("Skriv en text\n");
	char s[100], t[100];
	fgets(s, 100, stdin);
	remove_white(t, s);
	tolower_str(t, t);
	char b[strlen(t) + 1];
	baklanges(b, t);
	if (strcmp(b, t) == 0)
		printf("Palindrom\n");
	else
		printf("Inte palindrom\n");
}
