//-----------------------------------------------------------------------
// Object: This program has some syntax errors. Use the compiler to find 
// and correct them. Document your changes with comments or in log.
//-----------------------------------------------------------------------
// File:    errorsearch.c
// Summary: This program calculates the weekly pay, given hours per week
// and wages per hour.                                                          //Tycker inte detta ser snyggt ut.
// Version: 1.1
//-----------------------------------------------------------------------
// Log: 2015-03-09: Created the file, Nisse!
//		2018-08-14: Revised by Lisa. Using manipulators to format output instead 
//					of io-flags. Inserted "wait for return code" at the end.
//		2019-10-18: Revised by Tomas. Converted to English version and VS 2012.
//		2019-10-21: Revised by Nisse for VS 2013.
//      
//-----------------------------------------------------------------------
// Glömt #include <stdio.h>
// Funktionen main måste returnera int. Så int main ska det vara.
double main()  
{
	// Define and initialize variables
	//Du har inget semikolon efter dessa 2 rader.
    int hoursPerWeek = 35
	//Räcker med en int här.
    double hourlyWages = 83
	
	// Calculate weekly wage
    // ta bort ett = här, annars tilldelar du inte nåt
    //måste ta int(heltal) här annars görs inte variabeln weeklywages.
	weeklyWages == hoursPerWeek * hourlyWages;

	// Show result
	// Här har du tre variabler som ska köras, men du har bara ensom ska köras och den är en int, Så ta bort 2 och skriv %d istället.
    // Det ska vara ett PAR "" inte 3 par. Ta bort alla efter första komma tecknet. 
    // Du ska inte ha en new line där, möjligtvis i första printf:en du skriver(Se exempel).
    // Du ska ju skriva ut %d efter hourlywages och med ett : tecken (annars hamnar ju värdet i början) följt av ett space(blir snyggare då)
    //du har ingen kr varibel och det är 2 kommatecken för mkt.
    printf("%s %f %s\n", "Given an hourly wage of ", hourlyWages, " kr");
	//Samma som ovan med variablerna och "" tecken och allt annat som ovan.
    printf("%s %d %s\n", " the weekly wages will be: ", weeklyWages, " kr");
   	return 0;
}
//Tycker även att du ska "tabba in" all kod en tab, just nu ser det ut att vara 2 tab 1 tab är okej men inte två.
    //Såhär kan programmet se ut istället.
    
#include <stdio.h>
int main()  
{
	// Define and initialize variables
    int hoursPerWeek = 35;
    int hourlyWages = 83;
	
	// Calculate weekly wage
    int weeklyWages = hoursPerWeek * hourlyWages;

	// Show result
	printf("Given an hourly wage of hourlyWages: %.2d\n", hourlyWages);
    printf("The weekly wages will be: %.2d", weeklyWages);
    return 0;
}