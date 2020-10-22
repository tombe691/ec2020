 #include <stdio.h>
 
double nfak(int);
 
int main () {
  int n;
  printf("n? ");
  scanf("%d", &n);
  printf("n! = %.0f", nfak(n));
}

double nfak(int n){
  double r=1;
    for (int i=2; i <=n; i++)
      r = r*i;
  return r;
}

