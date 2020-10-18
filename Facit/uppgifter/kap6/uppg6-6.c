 #include <stdio.h>
 
double nfak(int n) {
  double r=1;
    for (int i=2; i <=n; i++)
      r = r*i;
  return r;
}

int binkoeff(int n, int k) {
  return nfak(n)/(nfak(k)*nfak(n-k)) + 0.5;
}

 
int main () {
  int n, k;
  printf("n? ");
  scanf("%d", &n);
  printf("k? ");
  scanf("%d", &k);
  printf("Binkoff = %d", binkoeff(n,k));
}
