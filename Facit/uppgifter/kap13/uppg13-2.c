  // Bubble sort
  
  void sortera(int a[], int start, int slut) {
    _Bool byte_har_skett = 1; 
    while (byte_har_skett) {
      byte_har_skett = 0;
      for (int i=start; i<=slut; i++) {
        if (a[i]>a[i+1]) { 
           // i fel ordning, byt plats
          int temp=a[i]; 
          a[i]=a[i+1]; 
          a[i+1]=temp;
          byte_har_skett = 1;
        }
      }
    }
  }

