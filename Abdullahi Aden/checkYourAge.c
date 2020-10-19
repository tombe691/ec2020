//################################//
//Avsikt: Att kolla sin ålder.    //
//Författtare: Abdullahi Aden.    //
//Datum: 2020.10.15.              //
//################################//

#include<stdio.h>


int main(){
	
	
	int age, currentYear,birthYear;
	printf("Enter your birthYear? (only 4 digit)\n");
	scanf("%d",&birthYear),
	
	currentYear=2020;
	
	age=currentYear-birthYear;
	
	printf("You are %d years old:\n");
	
	if(age <=15){
		printf("You are child:\n");
	}
	else if(age<=30){
		printf("You are still youang:\n");
	}
	else if (age<=55){
		printf("You are middle age:\n");
	}	
	else
	    printf("prepare for pensions live:");
	
	return 0;
}
