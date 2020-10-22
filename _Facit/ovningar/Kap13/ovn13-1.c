#include <stdio.h>

struct punkt {
  double x;
  double y;
};

int main() {
    struct punkt a[100]; 
    FILE *f = fopen("kurva.txt", "r");
    int n = 0;    // antal punkter
    // Läs från filen
    while (fscanf(f, "%lf%lf", &a[n].x, &a[n].y) == 2) 
      n++;
    // Leta efter punkten i fältet a
    int i = 0;
    for (; i<n; i++) 
      if (a[i].x<0 && a[i].y<0 )
        break;
    if (i < n)  // punkten hittades
      printf("(%.2f, %.2f)\n",a[i].x, a[i].y);
    else
      printf("Kunde inte hitta punkten\n");    
}
