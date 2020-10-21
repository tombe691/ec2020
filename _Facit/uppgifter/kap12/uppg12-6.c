#include <stdio.h>
#include <string.h>
#include "mystring.h"
#include "abonnemang.h"

int main() {
  struct abonnemang b1, b2;
  const int size = sizeof (struct abonnemang);
  FILE *f = fopen("mobildata.dat", "r+b");
  if (f == NULL)    // Filen fanns inte tidigare, skapa en ny
     f = fopen("mobildata.dat", "w+b");
  while(1) {
    printf("Namn: ");
    if (!read_line(b1.namn, sizeof b1.namn))
      break;               
    printf("Ange data för %s\n", b1.namn);
    scanf("%lf%d%lf%lf%lf", &b1.per_manad, &b1.fria_min,
               &b1.extra_min, &b1.fria_gb, &b1.extra_gb);
    skip_line();
    // Leta efter namnet i filen
    rewind(f);
    _Bool fanns = 0;   
    while(fread(&b2, size, 1, f) == 1) {
       if (strcmp(b1.namn, b2.namn) == 0) {    // Namnet fanns, ändra data
         fanns = 1;
         fseek(f, -size, SEEK_CUR);
         fwrite(&b1, size, 1, f);
         break;
       }
    }
    if (!fanns)    
      fwrite(&b1, size, 1, f);   // Namnet fanns inte, lägg till sist
  }
  fclose(f);
}

/* Du kan använda följande program för att kontrollera vad som finns i filen:

#include <stdio.h>
#include "abonnemang.h"
int main() {
  struct abonnemang b;
  FILE *f = fopen("mobildata.dat", "r");  
  while(fread(&b, sizeof (struct abonnemang), 1, f) == 1) {
    printf("%s\n", b.namn);
    printf("%1.2f %d %1.2f %1.2f %1.2f\n", 
           b.per_manad, b.fria_min, b.extra_min, b.fria_gb, b.extra_gb);
  }
}
*/