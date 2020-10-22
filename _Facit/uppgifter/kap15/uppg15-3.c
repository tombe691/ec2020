// Det förutsätts att funktionen bara anropas med argument > 0
#include <stdio.h>

void put_bin(int i) {
  if (i>0) {
    put_bin(i / 2);
    printf("%d", i % 2);
  }
}

