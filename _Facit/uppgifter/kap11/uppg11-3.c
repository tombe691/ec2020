_Bool ortogonala(int *v1, int *v2, int n) {
   int sum = 0;
   for (int *p1=v1, *p2=v2; p1<v1+n; p1++, p2++)
     sum += *p1 * *p2;
   return sum==0;
}
