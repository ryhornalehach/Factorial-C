#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50  //size of my array

/* Place prototypes here */
void make_my_stars_array (char[], int); 


int main (void)
{

	/* Place input variables here */
int number;


	/* place output variables here */
int factorial_value =0;
int i;
char FactARR[SIZE];
char stars_array [SIZE];
char num[4];        //buffer to convert integers to array
int strin_glengh;  //variable to count the anount of stars needed to be printed

	/* place algorithms here */

for (i= 0 ; i< 50; i++)
FactARR [i] = '\0';


printf ("Please enter an integer between 1 and 9  (or -1 for exit) > ");
scanf ("%d", &number);

while (number != -1)
{
if ((number > 0) && (number <= 9)) //this way calculation will look nice - not too long and not null
	{
	for (i= 0 ; i< 50; i++)
	stars_array [i] = '\0';

	factorial_value = number;
	strcpy (FactARR, "* ");
	strcat(FactARR,itoa(number, num,10));
	strcat(FactARR,"! = ");
	strcat(FactARR,itoa(number, num,10));

	for (i = number-1; i > 0; i--)
		{
		factorial_value *= i;
		strcat(FactARR," x ");
		strcat(FactARR,itoa(i, num, 10));
		}

	strcat(FactARR," = ");
	strcat(FactARR,itoa(factorial_value, num, 10));
	strcat(FactARR," *");

	strin_glengh = strlen (FactARR);  //this way my amount of stars will match the length of the array

	make_my_stars_array (stars_array, strin_glengh);

	printf(stars_array);
	printf ("\n");
	printf(FactARR);
	printf ("\n");
	printf(stars_array);
	printf ("\n");


	printf ("\nPlease enter an integer between 1 and 9 > ");
	scanf ("%d", &number);

	}

else
	{
	printf ("You canter enter that!\n\n");
	printf ("Please enter an integer between 1 and 9 > ");
	scanf ("%d", &number);
	}
}

printf ("Thanks for playing with me and have a nice day!\n");


	return (0);

} // end main


//function to return the array with correct number of stars

void make_my_stars_array (char stars_array[], int strin_glengh)
	{
	int i;
	for (i= 0 ; i< strin_glengh; i++)
	stars_array [i] = '*';

	}  //end of function 
