//F�rfattare ABdullahi Aden.
//Att omv�nd siffror.
// Datum: 2020.1014.


#include<stdio.h>
 
int main()
{
	
int num, reverse=0, temp;
  printf("Enter an intiger number to reverse?\n");
  scanf("%d", &num);
  printf("Before reverse:%d\n",num);
while(num){
  temp=num%10;
  reverse=reverse*10+temp;// Reverse=0, temp=3 D� blir utr�kningen 0*10+3=3. Sedan while loopen f�rts�tter till n�sta siffra tills det blir en 0 kvar.
  num=num/10;
}

printf("After reverse: %d\n",reverse);

}



