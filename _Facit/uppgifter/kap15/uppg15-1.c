double lon(int ar) {
  if (ar == 1)
    return 25000;
  else
    return 1.04*lon(ar-1) + 400;
}
