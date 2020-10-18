// Ailina Gustavsson 2020-10-18 programmeringsuppgift 10.2 
#include <stdio.h> 

int main () {
     FILE *infile = fopen ("textfile.txt","r" ); // r= read läser av filen
     while (1)// samma som while true 
     {
         int c = fgetc(infile);    
          if (feof (infile)) {
              break;
          }
        if (c=='\t') {
            printf ("   "); //skriver ut 3 mellanslagen
        } else {
            printf ("%c", c);   // skriver ut char,c
        } 
     }
     fclose(infile); //stänger  anslutingingen till filen 
     return 0;
}