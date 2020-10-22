  void rotera(int a[], int n) {
    int temp = a[n-1];
    for (int i=n-1; i>=1; i--)
      a[i] = a[i-1];
    a[0] = temp;
  } 
  
  // Testprogram (ingick inte i uppgiften)
  #include <stdio.h>
  int main() {
    int f[] = {1, 2, 3, 4, 5};
    int n = sizeof f/sizeof f[0];
    rotera(f, n);
    for (int i=0; i<n; i++)
      printf("%d  ", f[i]);
  }

