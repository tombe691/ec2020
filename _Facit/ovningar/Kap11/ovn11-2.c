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
Svar p� fr�gorna:
Vad h�nder? Kompilatorn ger en varning. Programmet sp�rar ur eller skriver ut skr�p.
Blir det n�gon skillnad om du ist�llet f�r att l�ta q2 vara oinitierad initierar den s� att den f�r v�rdet NULL? Nej!
Hade denna test fungerat om du inte initierat q2? Nej!
*/