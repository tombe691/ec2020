 #include <stdio.h>
 int main () {
   printf("Poäng? ");
   int poang;
   scanf("%d", &poang);
   if (poang >= 45)
     printf("Betyg: A");
	else if (poang >= 40)
     printf("Betyg: B");
    else if (poang >= 35)
     printf( "Betyg: C");
	else if (poang >= 30)
     printf("Betyg: D");
   else if (poang >= 25)
     printf("Betyg: E");
   else
     printf("Betyg: F");
}
