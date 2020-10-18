#include <stdio.h>

int main() {
float x = 5.8;
float *q1 = &x;
float *q2 = NULL;

printf("%f\n", *q1);
if (q2 != NULL)
  printf("%f\n", *q2);
}

/* 
Svar på frågorna:
Vad händer? Kompilatorn ger en varning. Programmet spårar ur eller skriver ut skräp.
Blir det någon skillnad om du istället för att låta q2 vara oinitierad initierar den så att den får värdet NULL? Nej!
Hade denna test fungerat om du inte initierat q2? Nej!
*/