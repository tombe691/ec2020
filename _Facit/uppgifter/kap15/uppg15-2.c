int sgd(int m, int n) {
  if (m == n)
    return m;
  else if (m > n)
    return sgd(m-n, n);
  else
    return sgd(m, n-m);
}

