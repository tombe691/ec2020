#include "mystring.h"

int antal (const char *s, char c) {
    int n = 0;
    for (int i=0; s[i] != '\0'; i++)
      if (s[i] == c)
        n++;
    return n;
}

_Bool ar_anagram(const char *s1, const char *s2) {
    char a[strlen(s1)+1], b[strlen(s2)+1];
    remove_white(a, s1);
    remove_white(b, s2);
	tolower_str(a,a);
	tolower_str(b,b);	
    if (strlen(a) != strlen(b))
      return 0;
    for (int i=0; a[i] != '\0'; i++)
      if (antal(a, a[i]) != antal(b, a[i]))
        return 0;
    return 1;
  }


  // testprogram
int main () {
    char t1[100], t2[100];
	printf("Den första texten? ");
	fgets(t1, 100, stdin);
	printf("Den andra texten? ");
	fgets(t2, 100, stdin);
    if (ar_anagram(t1, t2))
        printf("Anagram\n");
    else 
        printf("Inte anagram\n");	  
}
