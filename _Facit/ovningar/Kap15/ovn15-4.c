 #include <stdio.h>
 #include <string.h>
 typedef const char *enum_txt[];
int get_enum(enum_txt tab) {
  char s[100];
  if (scanf("%s", s)==1) {
    for (int k=0; tab[k] != NULL; k++) {
      if (strcmp(s, tab[k])==0)
        return k;
    }
    printf("Fel i indata\n");
  }
  return -1;
}
 int main() {
   enum betyg {U, G, VG};
   enum_txt tab = {"U",  "G",  "VG", 0};
   enum betyg b;
   int antal[] = {0,0,0};

   for (int i=1; i<=5; i++) {
     printf("Betyg på delprov %d? ", i);
     if ((b = get_enum(tab)) < 0)
       break;
     antal[b]++;
   }
   enum betyg slutbetyg;
   if (antal[0] > 0) 
	 slutbetyg = U;
   else if (antal[2] >= 4)
	 slutbetyg = VG;
   else 
	 slutbetyg = G;
   printf("Du fick slutbetyget %s\n", tab[slutbetyg]);
 }