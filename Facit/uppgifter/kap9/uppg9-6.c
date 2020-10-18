#include <stdio.h>
#include <string.h>

void justera(char *to, const char *from, int n) {
  int m = strlen(from);  // inklusive nolltecken
  if (m >= n)
    strcpy(to, from + (m-n));
  else {
	int i = 0;
    for (; i<n-m; i++)
	  to[i] = ' ';
	strcpy(to+i, from);
  }   
 }

  // testprogram
int main () {
    char t1[20], t2[20];
	printf("? ");
	scanf("%s", t2);
	justera(t1, t2, 6);
	printf("[%s]\n", t1); 
}