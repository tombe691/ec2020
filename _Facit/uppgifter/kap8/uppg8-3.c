void my_memcpy(double to[], double from[], int size) {
  for (int i=0; i<size / sizeof to[0]; i++)
    to[i] = from[i];
} 
