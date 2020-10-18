#include <stdio.h>
struct position {
  int lat_gr, lat_min, lat_sek;
  _Bool lat_nord;
  int long_gr, long_min, long_sek;
  _Bool long_ost;
};

void skriv_position(const struct position *p) {
  const char *sn = "SN";
  const char *vo = "VÖ";
  printf("%dgr%d'%d\" %c, ", p->lat_gr, p->lat_min, p->lat_sek, sn[p->lat_nord]); 
  printf("%dgr%d'%d\" %c\n", p->long_gr, p->long_min, p->long_sek, vo[p->long_ost]); 
}  

int main() {

  struct position got = {57, 39, 47, 1, 12, 16, 58, 1}; // Landvetter
  struct position arn = {59, 24, 52, 1, 17, 55, 18, 1}; // Arlanda
  printf("Landvetter: ");
  skriv_position(&got);
  printf("Arlanda:    ");
  skriv_position(&arn);
};


