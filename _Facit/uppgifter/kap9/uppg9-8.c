 #include <stdio.h>
 #include <string.h>

 int rom_varde(const char *s){
   const char rom_siff[] = "IVXLCDM";
   const int  siff_varde[] =  {1, 5, 10, 50, 100, 500, 1000};
   int len = strlen(s);
   // gör felkontroll
   if (len==0 || strspn(s, rom_siff) < len)
     return -1;  // texten innehåller något felaktigt tecken

   int siff[len+1];  // med ett extra element som innehåller 0
   siff[len] = 0;
   // fyll i vektorn siff
   for (int i=0; i<len; i++)
   {
     int j;
     for (j=0; s[i]!=rom_siff[j]; j++)
       ;
     siff[i] = siff_varde[j];
   }
   // beräkna det romerska talets värde
   int sum=0;
   for (int k=0; k<len; k++)
     if (siff[k] >= siff[k+1])
       sum += siff[k];
     else
       sum -= siff[k];
   return sum;
 }
     

int main()
{
  char romtal[20] ;
  printf("Skriv ett romerskt tal: ");
  scanf("%s", romtal);
  int n = rom_varde(romtal);
  if (n > 0)
    printf("%d\n", n); 
  else
	printf("Felaktigt romerskt tal\n");
}
