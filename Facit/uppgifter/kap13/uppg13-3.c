  // Insertion Sort

  void sortera(int a[], int start, int slut) {
    for (int i=start+1; i<=slut; i++) {
      for (int k=i; k > start && a[k-1] > a[k]; k--) {
        int temp = a[k]; 
        a[k] = a[k-1]; 
        a[k-1] = temp; 
      }
    }
  }

