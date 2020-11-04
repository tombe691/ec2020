  #include <stdio.h>
  #define N 50
  int main() {
    int primtab[N];
    _Bool prim;
    int antal=0, tal=1;
    while (antal < N)  {
      tal++;
      prim = 1;
      for (int i=0; i<antal && prim; i++)
        if (tal % primtab[i] == 0)
          prim = 0;
      if (prim)
        primtab[antal++] = tal;
    } 
    for (int j=0; j<N; j++)
      printf("%d\n", primtab[j]);
  }


