#include <stdio.h>

void main() {
    char a[] = {'L', 'e', 'i', 'f'};
    //dgdgdg
    char b[] = "Leif Krüger";
    char l = 'L', e = 'e', i = 'i', f = 'f';
    printf("1. Leif\n");
    printf ("2. %c%c%c%c\n",  l, e, i, f); //Utskrift tecken för tecken
    printf("3. ===\n");
    printf("4. %s\n", a); //Utskrift knas tar med både stäng a och b
    printf("5. ===\n");
    int antal = sizeof a/sizeof a[0]; //utskrift av array
    for (int i=0; i < antal; i++) {
        char tecken = a[i];
        printf("6. %c", tecken);
    }
    printf("\n");
    int antalb = sizeof b/sizeof b[0]; //utskrift av array
    for (int i=0; i < antalb; i++) {
        char teckenb = b[i];
        printf("7. %c", teckenb); //utskrift av array med nolltecken efter
    }
    printf("\n");
    for (int i=0; i < antalb-1; i++) {
        char teckenc = b[i];
        printf("8. %c", teckenc); //utskrift utan nollteclken efter pga -1
    }
    printf("\n");
}