 #include <stdio.h>
 #include <string.h>
 int main() {
   char a[] = "  /  /  "; 
   char v[11];;
   printf("Ange datum som ����-mm-dd: ");
   scanf("%s", v);
   strncpy(a+6, v+2, 2);  // �r
   strncpy(a+0, v+5, 2);  // m�n
   strncpy(a+3, v+8, 2);  // dag
   printf("Amerikanskt datum: %s\n", a);
 }