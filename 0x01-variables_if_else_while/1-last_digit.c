#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_number;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;


	if (last_number > 5)
	{

		printf("Last digit of %d is %d and is  greater than 5", n, last_number);
	}
	else if (last_number < 5)
	{
		
		printf("Last digit of %d is %d and is less than 6 not 0 ", n, last_number);
	}
	else if (last_number == 0) 
	{

		printf("Last digit of %d is %d and is 0 ", n, last_number);
	}


	/* your code goes there */
	return (0);
}
