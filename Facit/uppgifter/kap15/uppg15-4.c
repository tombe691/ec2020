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
  enum rom_siff {I, V, X, L, C, D, M};
  int  tab[] =  {1, 5, 10, 50, 100, 500, 1000};
  enum_txt rom_txt = {"I", "V", "X", "L", "C", "D", "M", 0};
  enum rom_siff rom_tal[100];
  int k, n=0, sum =0;

  printf("Skriv ett romerskt tal (med blanka mellan siffrorna)");
  while ((k=get_enum(rom_txt)) >= 0)
    rom_tal[n++] = k;
 
  for (int i=0; i<n-1; i++)
    if (rom_tal[i] < rom_tal[i+1])
      sum = sum - tab[rom_tal[i]];
    else
      sum = sum + tab[rom_tal[i]];
  sum = sum + tab[rom_tal[n-1]];
  printf("Talet är %d", sum);
}
