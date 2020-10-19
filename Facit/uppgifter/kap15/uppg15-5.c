
_Bool avlas(const char f[], int k)  // avläser bit nummer k
{
  int byte_nr = k >> 3;      // anger byte nr i f
  int bit_nr  = k & 7;       // anger bit nr inom byte
  unsigned char m = '\x80';  // m har möstret 10000000
  m = m >> bit_nr;           // skifta ettan åt höger till rätt bit
  return f[byte_nr] & m;     // är biten = 1 ?
}

void tilldela(char f[], int k, _Bool varde) // lägger värde i bit nr k
{
  int byte_nr = k >> 3;      // anger byte nr i f
  int bit_nr  = k & 7;       // anger bit nr inom byte
  unsigned char m = '\x80';  // m har möstret 10000000
  m = m >> bit_nr;           // skifta åt höger till rätt bit
  if (varde)
    f[byte_nr] = f[byte_nr] | m;
  else
    f[byte_nr] = f[byte_nr] & ~m;
}

