//-----------------------------------------------------------------------
// Object: This program has some syntax errors. Use the compiler to find
// and correct them. Document your changes with comments or in log.
//-----------------------------------------------------------------------
// File:    errorsearch.c
// Summary: This program calculates the weekly pay, given hours per week
// and wages per hour.
// Version: 1.1
//-----------------------------------------------------------------------
// Log: 2015-03-09: Created the file, Nisse!
//		2018-08-14: Revised by Lisa. Using manipulators to format output instead
//					of io-flags. Inserted "wait for return code" at the end.
//		2019-10-18: Revised by Tomas. Converted to English version and VS 2012.
//		2019-10-21: Revised by Nisse for VS 2013.
//
//-----------------------------------------------------------------------

void printf(char *traverse, char *argc, char *argv, char *argx);    // Our printf function
char* convert(unsigned int, int);                                   //Convert integer number into octal, hex, etc.
int weeklyWages;

double main()
{
	// Define and initialize variables
	int hoursPerWeek = 35
	double hourlyWages = 83

	// Calculate weekly wage
	weeklyWages == hoursPerWeek * hourlyWages;

	// Show result
	printf("%s %f %s\n", "Given an hourly wage of ", hourlyWages, " kr");
	printf("%s %d %s\n", " the weekly wages will be: ", weeklyWages, " kr");

	return 0;
}

void printf(char *traverse, char *argc, char *argv, char *argx)
{
	unsigned int i;

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while(*traverse != '%' )
		{
			putchar(*traverse);
			traverse++;
		}

		traverse++;

		switch(*traverse)
		{
			case 'c' : i = (int)argv;		//Fetch char argument
						putchar(i);
						break;

			case 'd' : i = (int)argv; 		//Fetch Decimal/Integer argument
						if (i < 0)
						{
							i = -i;
							putchar('-');
						}
						puts(convert(i, 10));
						break;

			case 'o': i = va_arg(arg, unsigned int); //Fetch Octal representation
						puts(convert(i,8));
						break;

			case 's': s = va_arg(arg, char *); 		//Fetch string
						puts(s);
						break;

			case 'x': i = va_arg(arg, unsigned int); //Fetch Hexadecimal representation
						puts(convert(i,16));
						break;
            case 'f': i = (float); //Fetch Hexadecimal representation
            			puts(convert(i, 16));
            			break;
            case 'f': i = (float); //Fetch Hexadecimal representation
                        puts(convert(i, 16));
                        break;
		}
	}

	//Module 3: Closing argument list to necessary clean-up
	va_end(arg);
}

char *convert(unsigned int num, int base)
{
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num % base];
		num /= base;
	} while(num != 0);

	return(ptr);
}
