int main() {
  char c1, c2;
  c1 ='$';
  c2 ='�';  
  // Den sista raden blir fel om denna programtext lagrats i formatet UTF-8.
  // Det beror p� att tecknet � lagras med mer �n en byte.
}