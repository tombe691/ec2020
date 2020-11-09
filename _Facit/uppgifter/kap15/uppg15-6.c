struct int_2 {
  unsigned int i1 : 4;
  unsigned int i2 : 4;
};
  
int summa(char c) {
  struct int_2  *p = (struct int_2  *) &c;
  return p->i1 + p->i2;

}
