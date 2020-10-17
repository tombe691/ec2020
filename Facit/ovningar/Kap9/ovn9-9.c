void replace(char *to, const char *from, char old, char new) {
  int i = 0;
  for (; from[i] != '\0'; i++)
	if (from[i] == old)
      to[i] = new;
    else
	  to[i] = from[i];
  to[i] = '\0';
}

