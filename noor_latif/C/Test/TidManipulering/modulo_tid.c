/* _____________________________________________________
 * Name    : modulo_tid.c
 * Author  : Noor Latif, noor@latif.se
 * Date    : 2020-10-03
 * -------------------- Description --------------------
 *          Clever ways of using modulo to calculate time.
 * _____________________________________________________ */
#include <stdio.h>
int main () {
  int tid, tim, min, sek;
  printf("Tid (i sekunder)? ");
  scanf("%d", &tid);
  tim = tid / 3600;
  tid = tid % 3600;
  min = tid / 60;
  tid = tid % 60;
  sek = tid;
  printf("%02d:%02d:%02d\n", tim, min, sek);
}