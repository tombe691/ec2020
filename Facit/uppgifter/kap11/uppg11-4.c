// Funktionen returnerar "sant" om kopieringen gick bra

_Bool kopiera(char *till, char *fran, int n)
{
  for (int i=0; i<n; i++)
    if (! (*till++ = *fran++))
      return 1;  // nolltecken kopierades

  * --till = '\0';  // misslyckades, lägg nolltecken sist
  return 0;
}