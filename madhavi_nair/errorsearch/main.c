#include<stdio.h>// header file declaration was missing

double main()  
{
	// Define and initialize variables
	int hoursPerWeek = 35; //Semiclolon was missing
	double hourlyWages = 83;//Semiclolon was missing
    double weeklyWages; //weeklywages variable wasnt declared
	
	// Calculate weekly wage

	weeklyWages = hoursPerWeek * hourlyWages;

	// Show result
    // Incorrect format string specified
	//printf("%s %f %s\n", "Given an hourly wage of ", hourlyWages, " kr");
	//printf("%s %d %s\n", " the weekly wages will be: ", weeklyWages, " kr");
    
    printf("\n Given an hourly wage of %0.3lf kr",hourlyWages);
    printf("\n The weekly wages will be %0.3lf kr",weeklyWages);


	return 0;
}
