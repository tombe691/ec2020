_Bool my_memcmp(double a[], double b[], int size) {
  for (int i=0; i<size / sizeof a[0]; i++)
    if (a[i] != b[i])
      return 0;
  return 1;
}

