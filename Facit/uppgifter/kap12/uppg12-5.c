
struct kort {
  int farg;   
  int valor;
};

void init_kortlek(struct kort a[]) {
  for (int f = 0; f < 4; f++) 
    for (int v = 1; v <= 13; v++) 
      a[f*13+(v-1)] = (struct kort) {f, v};
}

#include <stdlib.h>
void blanda(struct kort a[]) {
   for (int i = 1; i<=100; i++) {
     int i1 = rand() % 52;
     int i2 = rand() % 52;
     struct kort temp = a[i1];
     a[i1] = a[i2];
     a[i2] = temp;
   }
}
       
#include <time.h>
#include <stdio.h>
int main() {
  char *kortfarg[] = {"Kl ", "Ru ", "Hj ", "Sp "};
  struct kort b[52];
  init_kortlek(b);
  srand(time(NULL)); 
  blanda(b);
  int top = 0;
  while (1) {
    printf("Hur många kort vill du ha? ");
    int n;
    if (scanf("%d", &n) != 1 || n == 0)
      break;
    if (top + n <= 52) {
      printf("Du får korten: ");
      for (int i=top; i<top+n; i++)
        printf("%s%d  ", kortfarg[b[i].farg], b[i].valor);
      printf("\n");
      top = top + n;
    }
    else
      printf("Inte så många kort kvar\n");
  }
}

