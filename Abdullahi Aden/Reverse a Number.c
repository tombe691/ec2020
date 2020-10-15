//Författare ABdullahi Aden.
//Att omvänd siffror.
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
  reverse=reverse*10+temp;// Reverse=0, temp=3 Då blir uträkningen 0*10+3=3. Sedan while loopen förtsätter till nästa siffra tills det blir en 0 kvar.
  num=num/10;
}

printf("After reverse: %d\n",reverse);

}



