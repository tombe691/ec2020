
_Bool avlas(const char f[], int k)  // avl�ser bit nummer k
{
  int byte_nr = k >> 3;      // anger byte nr i f
  int bit_nr  = k & 7;       // anger bit nr inom byte
  unsigned char m = '\x80';  // m har m�stret 10000000
  m = m >> bit_nr;           // skifta ettan �t h�ger till r�tt bit
  return f[byte_nr] & m;     // �r biten = 1 ?
}

void tilldela(char f[], int k, _Bool varde) // l�gger v�rde i bit nr k
{
  int byte_nr = k >> 3;      // anger byte nr i f
  int bit_nr  = k & 7;       // anger bit nr inom byte
  unsigned char m = '\x80';  // m har m�stret 10000000
  m = m >> bit_nr;           // skifta �t h�ger till r�tt bit
  if (varde)
    f[byte_nr] = f[byte_nr] | m;
  else
    f[byte_nr] = f[byte_nr] & ~m;
}

