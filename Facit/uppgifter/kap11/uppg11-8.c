void split(char *s, char *tab[], int max) {
  int i;
  for (i=0; i<max; i++)
    tab[i] = 0;
  for (i=0; i<max; i++) {
    while (*s && *s == ' ')
      s++;
    if (!*s)
      return;
    tab[i] = s;
    while (*s && *s != ' ') 
      s++;
    if (!*s)
      return;
    *s++ = '\0';
  }  
}
    
// Testprogram, ingick inte i uppgiften
#include <stdio.h>
#define N 10
int main() {
  int i;
  char txt[] = "Nu lär  vi  oss C! ";
  char *tokens[N];
  split(txt, tokens, N);
  for (i=0; i< N && tokens[i]; i++) 
    printf("%s\n", tokens[i]);
}
