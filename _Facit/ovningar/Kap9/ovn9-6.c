 #include <stdio.h>
 #include <string.h>
 int main() {
   char a[] = "  /  /  "; 
   char v[11];;
   printf("Ange datum som ееее-mm-dd: ");
   scanf("%s", v);
   strncpy(a+6, v+2, 2);  // еr
   strncpy(a+0, v+5, 2);  // mеn
   strncpy(a+3, v+8, 2);  // dag
   printf("Amerikanskt datum: %s\n", a);
 }