 #include <stdio.h>
 int main() {
   char a[] = "  /  /  "; 
   char v[11];;
   printf("Ange datum som ????-mm-dd: ");
   scanf("%s", v);
   a[6]=v[2]; a[7]=v[3]; // ?r
   a[0]=v[5]; a[1]=v[6]; // m?n
   a[3]=v[8]; a[4]=v[9]; // dag
   printf("Amerikanskt datum: %s\n", a);
 }