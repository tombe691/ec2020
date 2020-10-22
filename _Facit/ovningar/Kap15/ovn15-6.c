#define PNAMN_LANGD 30
struct person {
  char fornamn[PNAMN_LANGD];
  char efternamn[PNAMN_LANGD];
  unsigned int fodd_ar : 11;
  _Bool singel : 1;
};